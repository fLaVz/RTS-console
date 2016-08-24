#include "ground_unit.h"

using namespace std;

ground_unit::ground_unit() {

	this->health = 100;
	this->speedWalk = 100;
	this->weapon = "default";
}

void ground_unit::damageTaken(int dmg) {

	this->health -= dmg;
}

void ground_unit::present() {

	cout << "Hi," << endl;
	cout << "I have like " << health << " hp!" << endl;
}
