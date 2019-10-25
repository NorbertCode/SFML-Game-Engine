#include "TextManager.h"
#include "engineData.h"

namespace Engine
{
	void TextManager::init(int charSize, sf::Color textColor, sf::Color outlineColor)
	{
		this->assets.loadFont("Roboto", ROBOTO_FONT_PATH);

		this->text.setFont(this->assets.getFont("Roboto"));
		this->text.setCharacterSize(charSize);
		this->text.setFillColor(textColor);
		this->text.setOutlineColor(outlineColor);
		this->text.setOutlineThickness(1);
	}
	void TextManager::update(std::string text, sf::Vector2f pos)
	{
		this->text.setString(text);
		this->text.setPosition(pos);
	}
	void TextManager::draw(sf::RenderWindow &window)
	{
		window.draw(this->text);
	}
	sf::Text TextManager::returnText()
	{
		return this->text;
	}
}
