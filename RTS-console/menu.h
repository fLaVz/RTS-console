#ifndef DEF_MENU
#define DEF_MENU

#include "main.h"

class menu {

	std::string menuState;
	std::vector<std::string> retState;

public :
	menu();
	std::vector<std::string> configure();
	
	//MUTATEURS ET ACCESSEURS
	void setMenustate(std::string state);
	std::string getMenustate();

	void setParametres(std::string state);

	

};

#endif


