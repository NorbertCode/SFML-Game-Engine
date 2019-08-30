#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <map>

namespace Engine
{
	class Assetmanager
	{
		std::map<std::string, sf::Texture> textures; //Stores textures
		std::map<std::string, sf::Font> fonts; //Stores fonts
		std::map<std::string, sf::SoundBuffer> sounds; //Stores SoundBuffers
	public:
		void loadTexture(std::string name, std::string path); //Loads a textures
		sf::Texture &getTexture(std::string name); //Returns a texture with given name

		void loadFont(std::string name, std::string path); //Loads a font
		sf::Font &getFont(std::string name); //Returns a font with given name

		void loadSoundBuffer(std::string name, std::string path); //Load a SoundBuffer
		void playSound(std::string bufferName); //Plays a Sound from given Buffer

		void writeToFile(std::string path, std::string input);  //Writes text to a file
		void appendToFile(std::string path, std::string input); //Writes text to the end of file

		std::string readFromFile(std::string path, std::string lineBefore); //Read the line under the given one
		//There's a config file in resources folder, you can check how these methods work in the FPScounter class
	};
}
