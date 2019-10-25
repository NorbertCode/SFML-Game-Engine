#pragma once
#include "SFML/Graphics.hpp"

namespace Engine
{
	class Input
	{
	public:
		//Checks if you clicked on a sprite or a rectangle
		bool isButtonClicked(sf::RenderWindow &window, sf::Sprite button);
		bool isButtonClicked(sf::RenderWindow &window, sf::RectangleShape button);
		//Checks if mouse is hovering over a sprite or rectangle
		bool isMouseOnButton(sf::RenderWindow &window, sf::Sprite button);
		bool isMouseOnButton(sf::RenderWindow &window, sf::RectangleShape button);
	};
}
