#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include "main.h"

class texture {

	std::string name;			//Le nom de la texture
	sf::Texture png;			//l'image de la texture en elle même
	sf::Sprite box;				//la "hitbox" de la texture

public :

	texture(std::string name);
};
#endif