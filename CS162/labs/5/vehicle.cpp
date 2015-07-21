#include "vehicle.h"

vehicle::vehicle() {
	seats = 0;
}

vehicle::vehicle(int x) {
	seats=x;
}

int vehicle::getSeats() {
	return seats;
}
int vehicle::getToll() {
	return 20*seats;
}