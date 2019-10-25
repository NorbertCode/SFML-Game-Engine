#include "Input.h"

namespace Engine
{
	bool Input::isButtonClicked(sf::RenderWindow &window, sf::Sprite button)
	{
		sf::RectangleShape tempMouse; //Creates temporary object
		tempMouse.setSize(sf::Vector2f(20, 20));
		tempMouse.setPosition(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y));
		//Sets it's position to mouse's position relative to the window
		if (tempMouse.getGlobalBounds().intersects(button.getGlobalBounds())) //Checks for collision between button and tempMouse
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				return true;
			else
				return false;
		}
		else
			return false;
	}
	bool Input::isButtonClicked(sf::RenderWindow &window, sf::RectangleShape button)
	{
		sf::RectangleShape tempMouse; //Creates temporary object
		tempMouse.setSize(sf::Vector2f(20, 20));
		tempMouse.setPosition(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y));
		//Sets it's position to mouse's position relative to the window
		if (tempMouse.getGlobalBounds().intersects(button.getGlobalBounds())) //Checks for collision between button and tempMouse
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				return true;

			else
				return false;
		}
		else
			return false;
	}
	bool Input::isMouseOnButton(sf::RenderWindow &window, sf::Sprite button)
	{
		if (sf::Mouse::getPosition(window).x > button.getPosition().x && sf::Mouse::getPosition(window).x < button.getPosition().x + button.getGlobalBounds().width)
		{
			if (sf::Mouse::getPosition(window).y > button.getPosition().y && sf::Mouse::getPosition(window).y < button.getPosition().y + button.getGlobalBounds().height)
			{
				return true;
			}
			else return false;
		}
		else return false;
	}
	bool Input::isMouseOnButton(sf::RenderWindow &window, sf::RectangleShape button)
	{
		if (sf::Mouse::getPosition(window).x > button.getPosition().x && sf::Mouse::getPosition(window).x < button.getPosition().x + button.getGlobalBounds().width)
		{
			if (sf::Mouse::getPosition(window).y > button.getPosition().y && sf::Mouse::getPosition(window).y < button.getPosition().y + button.getGlobalBounds().height)
			{
				return true;
			}
			else return false;
		}
		else return false;
	}
}
