#ifndef GAME_H
#define GAME_H
#include <iostream>

class game {

	std::string gameState;
	std::string mode;

public :

	game();

	//MUTATEURS ET ACCESSEURS
	void setGamestate(std::string state);
	std::string getGamestate();

};
#endif