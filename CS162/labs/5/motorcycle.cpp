#include "motorcycle.h"

motorcycle::motorcycle () : vehicle() {
	//seats = 0;
}

motorcycle::motorcycle(int x) : vehicle(x) {}

int motorcycle::getToll(int &x) {
	if (x == 0) {
		return 10*seats;
	}
	else {
		return 20*(seats);
	}
}