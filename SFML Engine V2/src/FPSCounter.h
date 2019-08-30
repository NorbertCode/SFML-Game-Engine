#pragma once
#include "Assetmanager.h"

namespace Engine
{
	class FPScounter
	{
		bool firstTime; //Helps to stop text flashing
		float fps;
		int intFps;
		int frames;
		sf::Text text;
		sf::Font font;
		sf::Clock clock;
		sf::Clock whenToShow;
		Assetmanager assets;
	public:
		FPScounter(int textSize = 20);
		void calculate(); //Calculates the framerate
		void draw(sf::RenderWindow &window); /*Draws the number in top left corner if
		FPSCounterOn is true in the config file*/
	};
}

