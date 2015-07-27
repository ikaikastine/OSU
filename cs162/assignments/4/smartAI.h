#ifndef SMARTAI_H
#define SMARTAI_H
#include "roomba.h"

class smartAI : public Roomba {
	public:
		void cleanFloor(Floor&);
		smartAI(){};
};

#endif