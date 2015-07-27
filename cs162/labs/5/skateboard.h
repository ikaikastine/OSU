#ifndef SKATEBOARD_H
#define SKATEBOARD_H
#include "vehicle.h"

class skateboard : public vehicle {
	public:
		skateboard();
		skateboard(int);
		int getToll();
};

#endif