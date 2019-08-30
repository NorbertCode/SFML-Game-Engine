#include "Assetmanager.h"
#include <fstream>
#include <ios>
#include <iostream>

namespace Engine
{
	void Assetmanager::loadTexture(std::string name, std::string path)
	{
		sf::Texture tempTexture; //Creates a texture
		if (tempTexture.loadFromFile(path))
			this->textures[name] = tempTexture; //Adds the texture to std::map<>
	}
	sf::Texture &Assetmanager::getTexture(std::string name)
	{
		//Returns texture from std::map<>
		return this->textures.at(name);
	}
	void Assetmanager::loadFont(std::string name, std::string path)
	{
		sf::Font tempFont; //Creates a font
		if (tempFont.loadFromFile(path))
			this->fonts[name] = tempFont; //Adds font to std::map<>
	}
	sf::Font &Assetmanager::getFont(std::string name)
	{
		//Returns font from std::map<>
		return this->fonts.at(name);
	}
	void Assetmanager::loadSoundBuffer(std::string name, std::string path)
	{
		sf::SoundBuffer tempBuffer; //Creates a buffer
		if (tempBuffer.loadFromFile(path))
			this->sounds[name] = tempBuffer; //Adds SoundBuffer to std::map<>
	}
	void Assetmanager::playSound(std::string name)
	{
		
		sf::Sound tempSound; //Creates a temporary sound
		tempSound.setBuffer(this->sounds.at(name)); //Sets the sound's buffer
		tempSound.play(); //Plays sound from std::map<>
	}
	void Assetmanager::writeToFile(std::string path, std::string input)
	{
		std::fstream tempFile; //Creates a temporary filestream
		tempFile.open(path, std::ios::out); //Sets it to output
		tempFile << input << std::endl; //Writes to a file
		tempFile.close(); //Closes the file
	}
	void Assetmanager::appendToFile(std::string path, std::string input)
	{
		std::fstream tempFile; //Creates a temporary filestream
		tempFile.open(path, std::ios::app); //Sets it to append
		tempFile << input << std::endl;  //Writes to a file
		tempFile.close(); //Closes the file
	}
	std::string Assetmanager::readFromFile(std::string path, std::string lineBefore)
	{
		std::string toReturn; //This will be returned
		std::fstream tempFile; //Creates a temporary file
		tempFile.open(path, std::ios::in); //Sets it to input
		if (tempFile.good())
		{
			while (!tempFile.eof()) //Loop ends when the file ends
			{
				getline(tempFile, toReturn);
				if (toReturn == lineBefore) //Checks if the line is the one given as an argument
				{
					getline(tempFile, toReturn); //Gets the line below it
					tempFile.close();
					return toReturn;
				}
			}
		}
	}
}
