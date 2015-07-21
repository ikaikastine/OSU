#include "bike.h"

bike::bike () : vehicle() {
	seats = 0;
}

bike::bike(int x) : vehicle(x) {}


int bike::getToll() {
	return 0;
}