#pragma once
#include "SFML/Graphics.hpp"

namespace Engine
{
	struct Math
	{
		float randomize(float minNumber, float maxNumber); //Generates a random number
		sf::Vector2f centralize(float maxSizeX, float maxSizeY, sf::Sprite object); //Returns the position between given values
		sf::Vector2f centralize(float maxSizeX, float maxSizeY, sf::RectangleShape object);
		sf::Vector2f centralize(float maxSizeX, float maxSizeY, sf::Text object);
		sf::Vector2f centralize(sf::RenderWindow &window, sf::Sprite object); //Returns the position in the middle of the window 
		sf::Vector2f centralize(sf::RenderWindow &window, sf::RectangleShape object);
		sf::Vector2f centralize(sf::RenderWindow &window, sf::Text object);
		//If you want to centralize in the left half of your screen you just make maxSizeX half of your screen width or height
		//All methods of centralizing also remove half of the object's width and height
	};
}
