
##################################################################_Importations_###################################################################
import rclpy
from rclpy.node import Node
from alphabot2_interfaces.msg import Obstacle
from geometry_msgs.msg import Twist #type  de message ros pour les commandes de mouvement du robot elle contient v et w


##Topic
OBSTACLE_AVOIDANCE_TOPIC = "obstacles"
CMD_VEL_TOPIC = "cmd_vel"

class ObstacleAvoidance(Node):
    """Noeud ROS2 qui permet à Alphabot2 d'éviter les obstacles grâce à ses capteurs infrarouges. 
La classe IR_obstacle_sensors est utilisée pour lire les données des capteurs et publier des messages de type Obstacle sur le topic "obstacles"."""

#########################################################_Méthodes_####################################################################################################

    def __init__(self):
        super().__init__("obstacle_avoidance")
        self.get_logger().info(" ObstacleAvoidanceNode init ...")
        self.obstacle_subscribe=self.create_subscription(Obstacle, OBSTACLE_AVOIDANCE_TOPIC, 10)
        self.cmd_plublisher=self.create_publisher(Twist, CMD_VEL_TOPIC, 10)

    def obstacle_callback(self, msg):
        """
        cette méthode est appelée chaque fois qu'un message de type Obstacle est publié sur le topic obstacles.
         Elle lit les données du message pour déterminer si un obstacle est détecté à gauche ou à droite, 
         et publie des commandes de mouvement appropriées pour éviter l'obstacle.
        """
        commande=Twist()
        if msg.left_obstacle and not msg.right_obstacle:
            commande.linear.x=0.0
            commande.angular.z=0.3
            action_du_robot="Obstacle détecté à gauche :le robot tourne à gauche."
        elif msg.right_obstacle and not msg.left_obstacle:
            commande.linear.x=0.0
            commande.angular.z=-0.3
            action_du_robot="Obstacle détecté à droite :le robot tourne à droite."
        elif msg.right_obstacle and msg.left_obstacle:
            commande.linear.x=0.0
            commande.angular.z=0.0
            action_du_robot="Obstacles détectés des deux côtés :le robot s'est arrêté."
        else:
            commande.linear.x=0.3
            commande.angular.z=0.0
            action_du_robot="le robot avance."

        self.cmd_publisher.publish(commande)
        self.get_logger().info(action_du_robot)

    
    def main(ord=None)
:
