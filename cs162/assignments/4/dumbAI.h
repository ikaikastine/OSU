#ifndef DUMBAI_H
#define DUMBAI_H
#include "roomba.h"

class dumbAI : public Roomba {
	public:
		void cleanFloor(Floor&);
		dumbAI(){};
};

#endif