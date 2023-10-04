// publisher_node.cpp
#include <ros/ros.h>
#include "my_publisher_subscriber/MyMessage.h"  // Include your custom message if needed

int main(int argc, char** argv) {
    ros::init(argc, argv, "my_publisher");
    ros::NodeHandle nh;

    ros::Publisher publisher = nh.advertise<my_publisher_subscriber::MyMessage>("my_topic", 10);

    // Your publishing logic here

    ros::spin();
    return 0;
}