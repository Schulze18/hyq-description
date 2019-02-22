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
	//this->model->GetLinks()[0]->SetLinearVel(math::Vector3(0,0,0.1));
	//this->model->SetLinearVel(math::Vector3(0,0,0.1));

	std::cout << "\nNome modelo: " << this->model->GetName() << "\n";
	std::cout << "\nNome mundo: " << this->world->GetName() << "\n";

	//std::cerr << "\njoint_test: " << this->model->GetChildLink() << "\n";

	//std::cerr << "\njoint_test: " << this->model->GetChildLink()[0].GetName() << "\n";

	//std::cerr << "\njoint_test: " << this->model->GetChildJoints()[0].GetName() << "\n";
	
	//std::vector<JointPtr> joint_test;// = this->model->GetJoints(); 
	//physics::JointPtr joint_test =  this->model->GetJoints();
	physics::Joint_V joint_test = this->model->GetJoints();
	std::cout << "\nNumber joints: " << joint_test.size()  << "\n";
	std::cout << "\nName joint 1: " << (joint_test[0])->GetName()  << "\n";
	
	math::Angle angle_test;
	angle_test.SetFromDegree(10);
	//(joint_test[0])->SetAngle(0,angle_test);	

	angle_test = (joint_test[0])->GetAngle(0);

	std::cout << "test angle " <<  angle_test << "\n";

	// Create our ROS node. This acts in a similar manner to the Gazebo node
	this->rosNode.reset(new ros::NodeHandle("hyq_gazebo_client"));

	// Configure Timer and callback function
	this->pubTimer = this->rosNode->createTimer(ros::Duration(0.5), &HyQJointAngleControl::joint_control_callback,this);

}

////////////////////////////////////////////////////////////////////////////////
// Update the controller
void HyQJointAngleControl::UpdateChild()
{
}


void HyQJointAngleControl::joint_control_callback(const ros::TimerEvent& event){
	//std::cout << "test hue\n";
	physics::Joint_V joint_test = this->model->GetJoints();
	math::Angle angle_test;
	angle_test = (joint_test[0])->GetAngle(0);

	std::cout << "test angle " <<  angle_test << "\n";
}


}
