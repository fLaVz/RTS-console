#include "game.h"

using namespace std;

game::game() {

	this->gameState = "MENU";

}

void game::setGamestate(string state) {
	
	gameState = state;
}

std::string game::getGamestate() {
	return gameState;
}
