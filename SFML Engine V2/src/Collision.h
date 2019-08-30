#pragma once
#include "SFML/Graphics.hpp"

namespace Engine
{
	struct CollisionDetection
	{
		//Check if the object is colliding with something over it
		bool checkUpCollision(sf::Sprite collider, sf::Sprite collidingWith);
		bool checkUpCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith);
		//Check if the object is colliding with something under it
		bool checkDownCollision(sf::Sprite collider, sf::Sprite collidingWith);
		bool checkDownCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith);
		//Check if the object is colliding with something left of it
		bool checkLeftCollision(sf::Sprite collider, sf::Sprite collidingWith);
		bool checkLeftCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith);
		//Check if the object is colliding with something right of it
		bool checkRightCollision(sf::Sprite collider, sf::Sprite collidingWith);
		bool checkRightCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith);
	};
}
