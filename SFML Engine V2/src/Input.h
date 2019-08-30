#pragma once
#include "SFML/Graphics.hpp"

namespace Engine
{
	class Input
	{
	public:
		//Checks if you clicked on a Sprite or a RectangleShape
		bool isButtonClicked(sf::RenderWindow &window, sf::Sprite button);
		bool isButtonClicked(sf::RenderWindow &window, sf::RectangleShape button);
	};
}
