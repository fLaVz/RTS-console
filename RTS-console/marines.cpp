#include "marines.h"

using namespace std;

marines::marines() {

	m_name = "Marines";
	health = 100;
	speedWalk = 100;
	speedFire = 100;

}

void marines::present() {

	ground_unit::present();
	cout << "And i'm a Marines!" << endl;

}
