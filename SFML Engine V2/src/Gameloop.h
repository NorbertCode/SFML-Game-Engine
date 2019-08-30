#pragma once
#include "Statemachine.h"
#include "Assetmanager.h"
#include "FPSCounter.h"

namespace Engine
{
	struct gameData //Structure for easy use of the main engine's features
	{
		sf::RenderWindow window;
		Statemachine states;
		Assetmanager assets;
		FPScounter fps;
	};
	typedef std::shared_ptr<gameData> gameDataPtr; //A shared pointer pointing at gameData

	class Gameloop
	{
		gameDataPtr prData = std::make_shared<gameData>();
		sf::Clock clock; //Clock for calculating delta time
		void run(); //The loop
	public:
		Gameloop(int width,int height,std::string name);
	};
}


