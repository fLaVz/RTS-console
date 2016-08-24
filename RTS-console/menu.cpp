#include "menu.h"

using namespace std;
using namespace sf;

menu::menu() {

}


vector<string> menu::configure() {

	//Creation du vector qui renvoie les paramètres du jeu
	vector<string> state;

	//Affichage de la fenêtre du menu
	RenderWindow window(VideoMode(1280, 720), "Menu", Style::Default);

	while (window.isOpen()) {
		Event event;

		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) window.close();
		}

		if(getMenustate() == "MENU") {

		}



		window.clear();
		window.display();
	}

	return state;
}

void menu::setMenustate(std::string state) {
	this->menuState = state;
}

std::string menu::getMenustate() {
	return menuState;
}

void menu::setParametres(std::string state) {
	retState.push_back(state);
}
