#ifndef ROOMBA_H
#define ROOMBA_H
#include "floor.h"

class Roomba {
	protected:
		int battery;
		int numMoves;
		int printMoves;
	public:
		int getBattery();
		void setBattery(int);
		int getMoves();
		void setMoves(int);
		int getPrintMoves();
		void setPrintMoves(int);

		virtual void cleanFloor(Floor&) {};
		void update(Floor &);
};

#endif