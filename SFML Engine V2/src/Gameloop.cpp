#include "Gameloop.h"
#include "ExampleState.h"

namespace Engine
{
	Gameloop::Gameloop(int width,int height,std::string name)
	{
		prData->window.create(sf::VideoMode(width, height), name); //Creates the window with given values
		prData->states.addState(statePtr(new ExampleState(this->prData)),true); //Adds a new state
		this->run(); //Runs the game
	}
	void Gameloop::run()
	{
		//Delta time stuff
		float newTime, deltaTime;
		float currentTime = this->clock.getElapsedTime().asSeconds();
		//The loop
		while (this->prData->window.isOpen())
		{
			this->prData->states.processStateChanges(); //Check for any state changes

			//Delta time stuff again
			newTime = this->clock.getElapsedTime().asSeconds();
			deltaTime = newTime - currentTime;
			if (deltaTime > 0.25f)
				deltaTime = 0.25f;

			currentTime = newTime;

			//Updates!
			this->prData->states.currentState()->update(deltaTime);
			this->prData->fps.calculate();

			//Drawing
			this->prData->window.clear();
			this->prData->states.currentState()->draw(this->prData->window);
			this->prData->fps.draw(this->prData->window);
			this->prData->window.display();
		}
	}
}
