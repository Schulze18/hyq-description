/*
 * Copyright (C) 2012-2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
/*
 * Desc: Joint Angle Position for HyQ robot from IIT.
 * Author: Lucas Schulze
 * Date: 22 February 2019
 */

#ifndef HYQ_JOINT_ANGLE_CONTROL_HH
#define HYQ_JOINT_ANGLE_CONTROL_HH

#include <ros/ros.h>
#include <ros/callback_queue.h>
#include <ros/subscribe_options.h>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/TransportTypes.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/common/common.hh>
#include <gazebo/common/Time.hh>
#include <gazebo/common/Plugin.hh>
#include <gazebo/common/Events.hh>
#include <geometry_msgs/Point.h>
#include <thread>
#include <iostream>
#include <time.h>
#include <sys/time.h>
// Basic libraries for C and C++
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
//Message types
#include <sensor_msgs/Imu.h>
#include <std_msgs/Float64MultiArray.h> 

namespace gazebo
{

	class HyQJointAngleControl : public ModelPlugin
	{
		/// \brief Constructor
		public: HyQJointAngleControl();

		/// \brief Destructor
		public: virtual ~HyQJointAngleControl();

		/// \brief Load the controller
		public: void Load( physics::ModelPtr _parent, sdf::ElementPtr _sdf );

		/// \brief Update the controller
		public: void low_control_callback(const ros::TimerEvent& event);

		public: void update_joint_state();
	
		public: void joint_control();
		

		//Methods to update joint reference
		public: void OnRosMsg(const std_msgs::Float64MultiArrayConstPtr& msg);

		public: void QueueThread();

		//Variables
		private: physics::WorldPtr world;
      
		private: physics::ModelPtr model;

		private: ros::Timer pubTimer;

		private: physics::Joint_V joints;
		
		// A node use for ROS transport
		private: std::unique_ptr<ros::NodeHandle> rosNode;

		//Control variable
		private: double joint_pos[12];

		private: double joint_vel[12];

		private: double joint_pos_ref[12] = {0, 0.8, -1.6, 0, -0.8, 1.6, 0, 0.8, -1.6, 0, -0.8, 1.6};
		//private: double joint_pos_ref[12] = {-0.2, 0.75, -1.5, -0.2, -0.75, 1.5, -0.2, 0.75, -1.5, -0.2, -0.75, 1.5};

		private: double joint_vel_ref[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		private: double joint_actuator[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		private: double old_joint_actuator[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		// A flag to initialize the controller only after the first reference command
		private: int flag_inicio = 1; 


		//Joint low control parameters
		private: int cont_it = 0; 

		private: int cont_control_it = 0; 

		private: double KP_joint = 260;//260; //250;
		
		private: double KD_joint = 8; //10;


		//Variables from topic to receive joint reference
		// A ROS callbackqueue that helps process messages
		private: ros::CallbackQueue rosQueue;

		// A thread the keeps running the rosQueue
		private: std::thread rosQueueThread; 

		// A ROS subscriber
		private: ros::Subscriber rosSub_ref;    


   };

}

#endif

