#include "Math.h"
#include <random>

//I'm not going to comment this, because it's not that complicated
namespace Engine
{
	float Math::randomize(float minNumber, float maxNumber)
	{
		std::random_device randev;
		std::uniform_int_distribution<int> d(minNumber, maxNumber);
		return d(randev);
	}
	sf::Vector2f Math::centralize(float maxSizeX, float maxSizeY, sf::Sprite object)
	{
		float tempX = maxSizeX / 2 - object.getGlobalBounds().width / 2;
		float tempY = maxSizeY / 2 - object.getGlobalBounds().height / 2;
		return sf::Vector2f(tempX, tempY);
	}
	sf::Vector2f Math::centralize(float maxSizeX, float maxSizeY, sf::RectangleShape object)
	{
		float tempX = maxSizeX / 2 - object.getGlobalBounds().width / 2;
		float tempY = maxSizeY / 2 - object.getGlobalBounds().height / 2;
		return sf::Vector2f(tempX, tempY);
	}
	sf::Vector2f Math::centralize(sf::RenderWindow &window, sf::Sprite object)
	{
		float tempX = window.getSize().x / 2 - object.getGlobalBounds().width / 2;
		float tempY = window.getSize().y / 2 - object.getGlobalBounds().height / 2;
		return sf::Vector2f(tempX, tempY);
	}
	sf::Vector2f Math::centralize(sf::RenderWindow &window, sf::RectangleShape object)
	{
		float tempX = window.getSize().x / 2 - object.getGlobalBounds().width / 2;
		float tempY = window.getSize().y / 2 - object.getGlobalBounds().height / 2;
		return sf::Vector2f(tempX, tempY);
	}
}
