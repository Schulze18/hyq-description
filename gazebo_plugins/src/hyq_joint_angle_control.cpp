/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2013, Open Source Robotics Foundation
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Open Source Robotics Foundation
 *     nor the names of its contributors may be
 *     used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/**
 *  \author Lucas Schulze
 *  \desc   Joint Angle Position for HyQ robot from IIT.
 */

#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/include/hyq_joint_angle_control.h"
#include <ros/ros.h>
#include <ros/console.h>
#include <ros/callback_queue.h>
#include <ros/subscribe_options.h>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/common/common.hh>
#include <gazebo/math/gzmath.hh>
#include <thread>
#include <iostream>
#include <time.h>
#include <sys/time.h>
// Basic libraries for C and C++
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Message types
#include <sensor_msgs/Imu.h> 
#include <std_msgs/Float64MultiArray.h>
//Matlab files for inverse dynamics
#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/include/inv_dyn_hyq.h"
#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/src/inv_dyn_hyq.cpp"
#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/src/inv_dyn_hyq_data.cpp"
#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/include/rtwtypes.h"

namespace gazebo
{
// Register this plugin with the simulator
GZ_REGISTER_MODEL_PLUGIN(HyQJointAngleControl);

////////////////////////////////////////////////////////////////////////////////
// Constructor
HyQJointAngleControl::HyQJointAngleControl()
{
}

////////////////////////////////////////////////////////////////////////////////
// Destructor
HyQJointAngleControl::~HyQJointAngleControl()
{
}

////////////////////////////////////////////////////////////////////////////////
// Load the controller
void HyQJointAngleControl::Load( physics::ModelPtr parent, sdf::ElementPtr sdf )
{
	// Make sure the ROS node for Gazebo has already been initalized
	if (!ros::isInitialized())
	{
		ROS_FATAL_STREAM_NAMED("template", "A ROS node for Gazebo has not been initialized, unable to load plugin. " << "Load the Gazebo system plugin 'libgazebo_ros_api_plugin.so' in the gazebo_ros package)");
		return;
	}
	
	this->world = parent->GetWorld();
	this->model = parent; 
	this->joints = this->model->GetJoints();
	
	sensor_msgs::Imu imu_test;

	math::Pose pose_hyq_test;
	//pose_hyq_test.pos.z = 5;
	//pose_hyq_test.pos.x = 5;
	//this->model->SetWorldPose(pose_hyq_test);

	std::cout << "\nNome modelo: " << this->model->GetName() << "\n";
	std::cout << "\nNome mundo: " << this->world->GetName() << "\n";

	// Create our ROS node. This acts in a similar manner to the Gazebo node
	this->rosNode.reset(new ros::NodeHandle("hyq_gazebo_client"));

	// Configure Timer and callback function
	this->pubTimer = this->rosNode->createTimer(ros::Duration(this->update_time), &HyQJointAngleControl::low_control_callback,this);


	math::Angle angle_initial;
	for (int i = 0; i < this->joints.size(); i++){
		std::cout << "Name joint " << i+1 << ": " << (this->joints[i])->GetName() << "\n";


		//angle_initial.SetFromRadian(this->joint_pos_ref[i]);
		/*(this->joints[i])->SetPosition(0,this->joint_pos_ref[i]);
		//this->joint_pos_ref[i] = (this->joints[i])->GetAngle(0).Radian();
		//std::cout << "joint " << i+1 << " " << this->joint_pos_ref[i] << " vel: " << this->joint_vel_ref[i] << "\n";
		std::cout << "joint " << i+1 << " " << (this->joints[i])->GetAngle(0).Radian() << "\n";
		//this->joint_vel[i] = (this->joints[i])->GetVelocity(0);*/

	}

	//std:string joint_name;
	/*this->pid_joint = common::PID(10, 0, 0.1);
	for (int i = 0; i < 12; i++){
		//joint_name = (this->model->GetJoints()[i])->GetScopedName();
		this->jointController.reset(new physics::JointController(this->model));
        	//this->jointController->AddJoint(joint_name);
       		//this->jointController->SetPositionPID(joint_name, this->pid_joint);
		this->jointController->AddJoint(joint_test[i]) ;
       		this->jointController->SetPositionPID((joint_test[i])->GetName(), this->pid_joint);

	}*/


	//Topic to receive new joint position reference
	
	//Create and subscribe to a topic with Quaternion type
	ros::SubscribeOptions so = ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
	"/" + this->model->GetName() + "/hyq_joint_ref",10,
	boost::bind(&HyQJointAngleControl::OnRosMsg, this, _1), ros::VoidPtr(), &this->rosQueue);

	// Store the subscriber for convenience.
	this->rosSub_ref = this->rosNode->subscribe(so);

	// Spin up the queue helper thread.
	this->rosQueueThread = std::thread(std::bind(&HyQJointAngleControl::QueueThread, this));

	this->inv_dyn_obj.initialize();

}

////////////////////////////////////////////////////////////////////////////////
void HyQJointAngleControl::low_control_callback(const ros::TimerEvent& event){

	double time_ini = this->get_wall_time();
	double time_cpu_ini = this->get_cpu_time(); 

	/*if (this->cont_it < 0) {
		this->cont_it++;
		this->flag_inicio = 0;
	}
	else {
		this->flag_inicio = 1;
	}*/
	this->flag_inicio = 1;
	/*if (this->cont_it < 10000) {
		this->cont_it++;
	}
	else {
		this->joint_pos_ref[1] = 0.6;
		this->joint_pos_ref[4] = -0.6;
		this->joint_pos_ref[7] = 0.6;
		this->joint_pos_ref[10] = -0.6;
	}*/


	if (this->flag_inicio == 1) {

		this->update_joint_state();

		this->joint_control();
	
	}

	//ros::Time time2 = ros::Time::now();
	std::cout << (this->get_wall_time() - time_ini) << "\n";
	this->delta_cpu_time = this->get_cpu_time() - time_cpu_ini;
	std::cout << (this->get_cpu_time() - time_cpu_ini) << "\n";
	std::cout << (this->delta_cpu_time) << "\n\n";


}

void HyQJointAngleControl::update_joint_state(){
	math::Angle angle_joint;
	for (int i = 0; i < this->joints.size(); i++){
		this->joint_pos[i] = (this->joints[i])->GetAngle(0).Radian();
		double old_vel = this->joint_vel[i];
		this->joint_vel[i] = (this->joints[i])->GetVelocity(0);
		this->joint_accel[i] = 0;//(this->joint_vel[i] - old_vel)/(this->update_time);
		//std::cout << "joint " << i+1 << " " << this->joint_pos[i] << " vel: " << this->joint_vel[i] << " accel: " << this->joint_accel[i] << "\n";
	}
	//std::cout << "\n\n";
	
	math::Vector3 hyq_linear_vel, hyq_angular_vel;
	hyq_linear_vel = this->model->GetWorldLinearVel();
	hyq_angular_vel = this->model->GetWorldAngularVel();
	
	this->hyq_cm_vel[0] = hyq_linear_vel[0];
	this->hyq_cm_vel[1] = hyq_linear_vel[1];
	this->hyq_cm_vel[2] = hyq_linear_vel[2];
	this->hyq_cm_vel[3] = hyq_angular_vel [0];
	this->hyq_cm_vel[4] = hyq_angular_vel [1];
	this->hyq_cm_vel[5] = hyq_angular_vel [2];
	
	/*for (int i = 0; i < 6; i++){
		std::cout << "trunv" << i+1 << " " << this->hyq_cm_vel[i] << "\n";
	}
	std::cout << "\n\n";*/

}

void HyQJointAngleControl::joint_control(){
	//std::cout << "test hue\n";
	//physics::Joint_V joint_test = this->model->GetJoints();
	//math::Angle angle_test;
	//angle_test = (joint_test[0])->GetAngle(0);
	//std::cout << "test angle " <<  angle_test << "\n";
	
	//std:string joint_name;

	for (int i = 0; i < this->joints.size(); i = i+1){
		
		if (this->cont_control_it < 4) this->cont_control_it++;
		else this->cont_control_it = 0;

		if (this->cont_control_it == 0){
			/*for (int i = 0; i < 6; i++){
				std::cout << "trunv" << i+1 << " " << this->hyq_cm_vel[i] << "\n";
			}
			std::cout << "\n\n";*/
	

			//Update torque from inverse dynamics
			this->inverse_dynamics();
			
			this->joint_actuator[i] = this->KP_joint*(this->joint_pos_ref[i] - this->joint_pos[i]) + this->KD_joint*(this->joint_vel_ref[i] - this->joint_vel[i]) + this->inv_dyn_tau[i];
		}

		(this->joints[i])->SetForce(0, (this->joint_actuator[i]));
		//(this->joints[i])->SetForce(0, (this->joint_actuator[i] - this->old_joint_actuator[i]));
		
		this->old_joint_actuator[i] = this->joint_actuator[i];

		/*
		angle_test = (joint_test[i])->GetAngle(0);
		std::cout << "test angle " << i << ":" << angle_test << "\n";
		//(joint_test[i])->SetPosition(0, this->joint_pos_ref[i]);

		//joint_name = (joint_test[i])->GetScopedName();
        	//this->jointController->SetPositionTarget(joint_name, this->joint_pos_ref[i]);
		this->jointController->SetPositionTarget((joint_test[i])->GetName(), this->joint_pos_ref[i]);
 		this->jointController->Update();*/
	}
	//std::cout << "\n\n";

}

void HyQJointAngleControl::inverse_dynamics(){

	//Update all the inputs from the model
	for(int i = 0; i < this->joints.size(); i++){
		this->inv_dyn_obj.rtU.q[i] = this->joint_pos[i];
		this->inv_dyn_obj.rtU.qd[i] = this->joint_vel[i];
		this->inv_dyn_obj.rtU.qdd[i] = this->joint_accel[i];
	}
	for(int i = 0; i < 6; i++){
		this->inv_dyn_obj.rtU.trunk_v[i] = this->hyq_cm_vel[i];
	}
	
	//Step model
	this->inv_dyn_obj.step();

	//Get outputs
	for(int i = 0; i < this->joints.size(); i++){
		this->inv_dyn_tau[i] = this->inv_dyn_obj.rtY.tau[i];
	}

}


	// Handle an incoming message from ROS
	// param[in] _msg A float value that is used to set the velocity of the Iris Rotors
void HyQJointAngleControl::OnRosMsg(const std_msgs::Float64MultiArrayConstPtr &msg)
	{
		//this->flag_inicio = 1;
		/*this->joint_pos_ref[0] = msg->orientation_covariance[0];
		this->joint_pos_ref[1] = msg->orientation_covariance[1];
		this->joint_pos_ref[2] = msg->orientation_covariance[2];
		this->joint_pos_ref[3] = msg->orientation_covariance[3];
		this->joint_pos_ref[4] = msg->orientation_covariance[4];
		this->joint_pos_ref[5] = msg->orientation_covariance[5];
		this->joint_pos_ref[6] = msg->orientation_covariance[6];
		this->joint_pos_ref[7] = msg->orientation_covariance[7];
		this->joint_pos_ref[8] = msg->orientation_covariance[8];
		this->joint_pos_ref[9] = msg->angular_velocity_covariance[0];
		this->joint_pos_ref[10] = msg->angular_velocity_covariance[1];
		this->joint_pos_ref[11] = msg->angular_velocity_covariance[2];*/

		this->joint_pos_ref[0] = msg->data[0];
		this->joint_pos_ref[1] = msg->data[1];
		this->joint_pos_ref[2] = msg->data[2];
		this->joint_pos_ref[3] = msg->data[3];
		this->joint_pos_ref[4] = msg->data[4];
		this->joint_pos_ref[5] = msg->data[5];
		this->joint_pos_ref[6] = msg->data[6];
		this->joint_pos_ref[7] = msg->data[7];
		this->joint_pos_ref[8] = msg->data[8];
		this->joint_pos_ref[9] = msg->data[9];
		this->joint_pos_ref[10] = msg->data[10];
		this->joint_pos_ref[11] = msg->data[11];
	}

	// ROS helper function that processes messages
void HyQJointAngleControl::QueueThread()
	{
	  static const double timeout = 0.01;
	  while (this->rosNode->ok())
	  {
	    this->rosQueue.callAvailable(ros::WallDuration(timeout));
	  }
}


// Return the Wall time expended
double HyQJointAngleControl::get_wall_time(){
   		 struct timeval time;
   		 if (gettimeofday(&time,NULL)){
        	//  Handle error
       		return 0;
    	}
    		return (double)time.tv_sec + (double)time.tv_usec * .000001;
	}

	// Return the time expended by the CPU
double HyQJointAngleControl::get_cpu_time(){
    		return (double)clock() / CLOCKS_PER_SEC;
}


}
