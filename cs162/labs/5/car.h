#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class car : public vehicle {
	public:
		car();
		car(int);
		int getToll(int&);
		//void setSeats(int);
};
#endif