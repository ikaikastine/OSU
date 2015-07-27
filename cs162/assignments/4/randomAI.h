#ifndef RANDOMAI_H
#define RANDOMAI_H
#include "roomba.h"

class randomAI : public Roomba {
	public:
		void cleanFloor(Floor&);
		randomAI(){};
};

#endif