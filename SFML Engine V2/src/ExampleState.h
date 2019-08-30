#pragma once
#include "StateBase.h"
#include "Gameloop.h"
#include "Math.h"
#include "Input.h"
#include "Collision.h"

namespace Engine
{
	class ExampleState : public StateBase
	{
		sf::RectangleShape rect; //An unmovable rectangle
		sf::RectangleShape movable; //A rectangle controled by the player
		//Some classes (and a structure) to use the engine's features
		Math math; //Contains centralize() and randomize()
		Input input; //Checks if the player clicks on a button (like at a sprite or RectangleShape)
		CollisionDetection collision; //Does all the collisions
		gameDataPtr prData; //The window, state machine and asset manager
	public:
		ExampleState(gameDataPtr data);
		virtual void run();
		virtual void update(float dt);
		virtual void draw(sf::RenderWindow &window);
	};
}


