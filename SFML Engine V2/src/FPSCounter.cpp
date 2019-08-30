#include "FPScounter.h"
#include "engineData.h"
#include <math.h>
#include <string>

namespace Engine
{
	FPScounter::FPScounter(int textSize)
	{
		this->firstTime = true;
		this->assets.loadFont("Roboto", ROBOTO_FONT_PATH); //Loads font using Asset manager
		this->text.setFont(this->assets.getFont("Roboto")); //Sets font using Asset manager
		this->text.setPosition(sf::Vector2f(0, 0));
		this->text.setCharacterSize(textSize);
	}
	void FPScounter::calculate()
	{
		//Calculates FPS
		this->frames++;
		this->fps = this->frames / this->clock.restart().asSeconds();
		this->frames = 0;
		this->intFps = (int)ceil(this->fps); //Rounds them up
		if (this->firstTime)
		{
			//Sets the text if it's the first time running
			this->text.setString("FPS: " + std::to_string(this->intFps));
			this->firstTime = false;
		}
	}
	void FPScounter::draw(sf::RenderWindow &window)
	{
		//Checks if FPSCounter is true in the config file
		if (this->assets.readFromFile(CONFIG_PATH, "FPSCounterOn") == "true")
		{
			if (this->whenToShow.getElapsedTime().asSeconds() > 0.25f)
			{
				this->text.setString("FPS: " + std::to_string(this->intFps));
				whenToShow.restart(); //Changes the text every quarter of a second
			}
			window.draw(text); //Draws the text
		}
	}
}

