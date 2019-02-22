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
		protected: virtual void UpdateChild();

		public: void joint_control_callback(const ros::TimerEvent& event);

		
		//Variables
		private: physics::WorldPtr world;
      
		private: physics::ModelPtr model;

		private: ros::Timer pubTimer;

		// A node use for ROS transport
		private: std::unique_ptr<ros::NodeHandle> rosNode;
      
   };

}

#endif

