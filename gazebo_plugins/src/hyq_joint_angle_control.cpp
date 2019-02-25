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
	
	math::Pose pose_hyq_test;
	//pose_hyq_test.pos.z = 5;
	//pose_hyq_test.pos.x = 5;
	//this->model->SetWorldPose(pose_hyq_test);

	std::cout << "\nNome modelo: " << this->model->GetName() << "\n";
	std::cout << "\nNome mundo: " << this->world->GetName() << "\n";

	// Create our ROS node. This acts in a similar manner to the Gazebo node
	this->rosNode.reset(new ros::NodeHandle("hyq_gazebo_client"));

	// Configure Timer and callback function
	this->pubTimer = this->rosNode->createTimer(ros::Duration(0.001), &HyQJointAngleControl::low_control_callback,this);

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
}

////////////////////////////////////////////////////////////////////////////////
void HyQJointAngleControl::low_control_callback(const ros::TimerEvent& event){

	if (this->cont_it < 5000) {
		this->cont_it++;
		this->flag_inicio = 0;
	}
	else {
		this->flag_inicio = 1;
	}

	if (this->flag_inicio == 1) {

		this->update_joint_state();

		this->joint_control();
	
	}

}

void HyQJointAngleControl::update_joint_state(){
	math::Angle angle_joint;
	for (int i = 0; i < this->joints.size(); i++){
		this->joint_pos[i] = (this->joints[i])->GetAngle(0).Radian();
		this->joint_vel[i] = (this->joints[i])->GetVelocity(0);
		std::cout << "joint " << i+1 << " " << this->joint_pos[i] << " vel: " << this->joint_vel[i] << "\n";
	}
	std::cout << "\n\n";
}

void HyQJointAngleControl::joint_control(){
	//std::cout << "test hue\n";
	//physics::Joint_V joint_test = this->model->GetJoints();
	//math::Angle angle_test;
	//angle_test = (joint_test[0])->GetAngle(0);
	//std::cout << "test angle " <<  angle_test << "\n";
	
	//std:string joint_name;

	for (int i = 0; i < this->joints.size(); i++){
		
		if (this->cont_control_it < 4) this->cont_control_it++;
		else this->cont_control_it = 0;

		if (this->cont_control_it == 0){
			this->joint_actuator[i] = this->KP_joint*(this->joint_pos_ref[i] - this->joint_pos[i]) + this->KD_joint*(this->joint_vel_ref[i] - this->joint_vel[i]);
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


}
