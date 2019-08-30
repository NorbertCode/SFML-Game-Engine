#include "Collision.h"

namespace Engine
{
	bool CollisionDetection::checkUpCollision(sf::Sprite collider, sf::Sprite collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(collider.getGlobalBounds().width - 20.0f, 5)); //Sets it's width to the collider's width - 20.0f and it's height to 5
		border.setPosition(collider.getPosition().x + 10.0f, collider.getPosition().y); //Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkUpCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(collider.getGlobalBounds().width - 20.0f, 5)); //Sets it's width to the collider's width - 20.0f and it's height to 5
		border.setPosition(collider.getPosition().x + 10.0f, collider.getPosition().y); //Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkDownCollision(sf::Sprite collider, sf::Sprite collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(collider.getGlobalBounds().width - 20.0f, 5)); //Sets it's width to the collider's width - 20.0f and it's height to 5
		border.setPosition(sf::Vector2f(collider.getPosition().x + 10.0f, collider.getPosition().y + collider.getGlobalBounds().height - border.getGlobalBounds().height));
		//Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkDownCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(collider.getGlobalBounds().width - 20.0f, 5));  //Sets it's width to the collider's width - 20.0f and it's height to 5
		border.setPosition(sf::Vector2f(collider.getPosition().x + 10.0f, collider.getPosition().y + collider.getGlobalBounds().height - border.getGlobalBounds().height));
		//Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkLeftCollision(sf::Sprite collider, sf::Sprite collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(5, collider.getGlobalBounds().height)); //Sets it's width to 5 and height to the collider's height
		border.setPosition(collider.getPosition()); //Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkLeftCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(5, collider.getGlobalBounds().height)); //Sets it's width to 5 and height to the collider's height
		border.setPosition(collider.getPosition()); //Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkRightCollision(sf::Sprite collider, sf::Sprite collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(5, collider.getGlobalBounds().height)); //Sets it's width to 5 and height to the collider's height
		border.setPosition(sf::Vector2f(collider.getPosition().x + collider.getGlobalBounds().width - border.getGlobalBounds().width, collider.getPosition().y));
		//Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
	bool CollisionDetection::checkRightCollision(sf::RectangleShape collider, sf::RectangleShape collidingWith)
	{
		sf::RectangleShape border; //Declares a temporary object
		border.setSize(sf::Vector2f(5, collider.getGlobalBounds().height)); //Sets it's width to 5 and height to the collider's height
		border.setPosition(sf::Vector2f(collider.getPosition().x + collider.getGlobalBounds().width - border.getGlobalBounds().width, collider.getPosition().y));
		//Sets it at the border of collider
		if (border.getGlobalBounds().intersects(collidingWith.getGlobalBounds())) //Checks if it collides with collidingWith
			return true;
		else
			return false;
	}
}
