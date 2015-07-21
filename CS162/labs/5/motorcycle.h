#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "vehicle.h"

class motorcycle : public vehicle {
	public:
		motorcycle();
		motorcycle(int);
		int getToll(int&);
};
#endif