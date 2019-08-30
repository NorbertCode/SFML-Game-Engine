#include "ExampleState.h"
#include <iostream>

namespace Engine
{
	ExampleState::ExampleState(gameDataPtr data) : prData(data)
	{

	}
	void ExampleState::run()
	{
		this->rect.setFillColor(sf::Color::Green);
		this->rect.setSize(sf::Vector2f(200, 100));
		this->rect.setPosition(this->math.centralize(this->prData->window, this->rect));
		this->movable.setSize(sf::Vector2f(100, 200));
	}
	void ExampleState::update(float dt)
	{
		//All the event stuff
		sf::Event event;
		while (this->prData->window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this->prData->window.close();
		}
		if (!this->isPaused) //Checks if the game's paused
		{
			//Pauses if the player presses Escape
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				this->isPaused = true;

			//Generates a random number if the player clicks at rect
			if (this->input.isButtonClicked(this->prData->window, this->rect))
				std::cout << this->math.randomize(1, 100) << std::endl;

			//Moves movable
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				this->movable.move(0, -200 * dt);

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				this->movable.move(0, 200 * dt);

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
				this->movable.move(-200 * dt,0);

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
				this->movable.move(200 * dt, 0);

			//All the collision stuff
			if (this->collision.checkUpCollision(this->movable, this->rect))
				this->movable.move(0, 200 * dt);

			if (this->collision.checkDownCollision(this->movable, this->rect))
				this->movable.move(0, -200 * dt);

			if (this->collision.checkLeftCollision(this->movable, this->rect))
				this->movable.move(200 * dt,0);

			if (this->collision.checkRightCollision(this->movable, this->rect))
				this->movable.move(-200 * dt,0);
		}
		else
		{
			//If it's paused and the player presses Escape it unpauses
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				this->isPaused = false;
		}
	}
	void ExampleState::draw(sf::RenderWindow &window)
	{
		window.draw(this->rect);
		window.draw(this->movable);
	}

}
