#include "ros/ros.h"
#include "std_msgs/String.h"
#include "decode_radars/tracklist.h" 


 
void callback(const decode_radars::tracklist& msg);

int main(int argc, char **argv)
{
    // Initialize the ROS node.
    ros::init(argc, argv, "my_subscriber_node");
    ros::NodeHandle nh;

    // Create a subscriber object.
    //ros::Subscriber sub = nh.subscribe("chatter", 1000, callback);
    ros::Subscriber sub = nh.subscribe("/fusion/tracks", 1000, callback);

    // Spin to handle callbacks.
    ros::spin();

    return 0;
}

void callback(const decode_radars::tracklist& msg)
{
    //ROS_INFO("I heard: [%s]", msg->data.c_str());
    ///*
    for (const auto& track : msg.tracklist)
        {
            ROS_INFO("Track ID: %d", track.track_id);
            ROS_INFO("X Position: %f", track.motion.pose.pose.position.x);
            ROS_INFO("Y Position: %f", track.motion.pose.pose.position.y);
            ROS_INFO("Velocity: %f", track.motion.linear_speed.x);
            // Add more fields as needed
        }
    //*/
}
