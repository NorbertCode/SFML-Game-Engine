#pragma once
#include "SFML/Graphics.hpp"

namespace Engine
{
	class StateBase
	{
	protected:
		bool isPaused; //I recommend making an if statement to check this at the beggining of update()
	public:
		//Override these methods to make the game work
		virtual void run()=0;
		virtual void update(float dt)=0;
		virtual void draw(sf::RenderWindow &window)=0;
		//Methods for pausing
		void pause() { this->isPaused = true; }
		void resume() { this->isPaused = false; }
	};
}


