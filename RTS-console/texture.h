#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include "main.h"

class texture {

	std::string m_path;				//Le nom de la texture
	sf::Texture m_texture;			//l'image de la texture en elle même
	sf::Sprite m_sprite;			//la "hitbox" de la texture

public :

	texture(std::string name, sf::Vector2f position);
	void drawTexture(sf::RenderWindow &window);
};
#endif