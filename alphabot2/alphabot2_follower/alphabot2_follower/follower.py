##################################################################_Importations_###################################################################

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
import math

#########################################_Classes_#################################################################################################
# Cette classe est un noeud ROS2 qui suit la position publiée par le leader
class Follower(Node):

###################################_Methodes_####################################################################################################    
    def __init__(self):
        super().__init__('follower_node')

        #follower subscribe à la position du leader 
        self.sub_leader = self.create_subscription(Odometry,'/position_leader',self.leader_callback,10)
        self.pub_cmd = self.create_publisher(Twist,'/cmd_vel',10)
        self.timer = self.create_timer(0.1, self.control_loop)

        self.dt= 0.1
        #Pose estimée du follower, On suppose qu'il démarre derrière le leader
        self.x = -1.0
        self.y = 0.0
        self.theta = 0.0

        #pose du leader
        self.leader_x = 0.0
        self.leader_y = 0.0
        self.leader_theta = 0.0
        self.leader_pose_received = False

        #distance entre les deux robots
        self.desired_robot_distance = 1.0

        self.timer = self.create_timer(self.dt, self.timer_callback)

        self.get_logger().info("Le noeud follower est démarré !!")

    def leader_callback(self, msg):
        self.leader_x=msg.x
        self.leader_y=msg.y
        self.leader_theta=msg.theta
        self.leader_pose_received = True

    def timer_callback(self):
        cmd_follower=Twist()

        if not self.leader_pose_received:
            self.cmd_vel_pub.publish(cmd_follower)
            self.get_logger().info("En attente de la position du leader...")
            return
        
        #calcul de la distance et de l'angle entre le follower et le leader
        dx = self.leader_x - self.x
        dy = self.leader_y - self.y
        distance = math.sqrt(dx**2 + dy**2)
        angle_to_leader = math.atan2(dy, dx)

        if distance > self.desired_robot_distance:
            cmd_follower.linear.x = 0.5
        else:
            cmd_follower.linear.x = 0.0

        self.pub_cmd.publish(cmd_follower)

        self.get_logger().info( "Distance leader/follower = " + str(round(distance, 2)) +"  cmd linear.x = " + str(cmd_follower.linear.x ))


def main(args=None):
    rclpy.init(args=args)
    node = Follower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    
