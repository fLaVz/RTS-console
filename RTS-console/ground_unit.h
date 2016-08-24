#ifndef DEF_GROUND_UNIT
#define DEF_GROUND_UNIT

#include <iostream>

class ground_unit {

protected:
	std::string weapon;
	std::string m_name;
	int health;
	int speedWalk;
	int speedFire;
	

public:

	ground_unit();
	void damageTaken(int dmg);
	void present();

};

#endif