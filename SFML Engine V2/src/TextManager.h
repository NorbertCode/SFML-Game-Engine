#pragma once
#include "Assetmanager.h"

namespace Engine
{
	class TextManager
	{
		Assetmanager assets;
		sf::Text text;
	public:
		void init(int charSize);
		void update(std::string text, sf::Vector2f pos);
		void draw(sf::RenderWindow &window);
		sf::Text returnText();
	};
}