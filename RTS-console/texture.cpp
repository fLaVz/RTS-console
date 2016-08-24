#include "texture.h"

using namespace std;
using namespace sf;

texture::texture(std::string name, sf::Vector2f position) {

	m_path = "assets/.png";
	m_path.insert(7, name);

	m_sprite.setPosition(position);


	if(!m_texture.loadFromFile(m_path))
		cout << "ERROR, Can't load texture located in " << m_path << endl;
	else
		m_sprite.setTexture(m_texture);

	if(name != "background")
		m_sprite.setScale(0.6, 0.6);
}
