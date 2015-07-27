#include "skateboard.h"

skateboard::skateboard () : vehicle() {
	seats = 0;
}

skateboard::skateboard(int x) : vehicle(x) {}

int skateboard::getToll() {
	return 0;
}