##################################################################_Importations_###################################################################
import rclpy #bibliotheque python pour ROS2
from rclpy.node import Node

from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose2D
import math

#########################################_Classes_#################################################################################################
#Cette classe est un noeud ROS2 qui publie sa position

class Leader(Node):
#####################################_Méthodes_####################################################################################################
#constructeur
    def __init__(self):
        super().__init__('robot_leader')

        self.cmd_vel_pub = self.create_publisher(Twist,'/cmd_vel',10) #cree un publisher qui publie des messages de type Twist sur le topic /cmd_vel avec une queue de 10 messages
        self.position_pub = self.create_publisher(Pose2D,'/position_leader',10) #cree un publisher qui publie des messages de type Pose2D sur le topic /position_leader avec une queue de 10 messages

        self.dt = 0.1 
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        self.v = 1.0
        self.w = 0.0

        self.timer = self.create_timer(self.dt,self.timer_callback) 

#cette méthode timer_callback est appelée toutes les 0.1 secondes par le timer et publie les vitesses et la position du robot 
    def timer_callback(self):
        #Publie les vitesses du robot
        vitesses=Twist()
        vitesses.linear.x=self.v
        vitesses.angular.z=self.w

        self.cmd_vel_pub.publish(vitesses)
        self.get_logger().info("Le robot leader publie les vitesses: linear.x = " + str(vitesses.linear.x) + ", angular.z = " + str(vitesses.angular.z))

        #Modéle cinématique du robot
        self.x += self.v * math.cos(self.theta) * self.dt
        self.y += self.v * math.sin(self.theta) * self.dt
        self.theta += self.w * self.dt

        #Publie la position du robot
        pose = Pose2D()
        pose.x = self.x
        pose.y = self.y
        pose.theta = self.theta

        self.position_pub.publish(pose)
        self.get_logger().info("Le robot leader publie la position: x = " + str(pose.x) + ", y = " + str(pose.y) + ", theta = " + str(pose.theta))

def main(args=None):

    rclpy.init(args=args)

    node = Leader()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()