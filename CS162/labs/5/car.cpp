#include "car.h"
#include "Date.h"

car::car () : vehicle() {
	//seats = 0;
}

car::car(int x) : vehicle(x) {}


int car::getToll(int &x) {
	if (x == 5) {
		return 10*seats;
	}
	else {
		return 20*(seats);
	}
}