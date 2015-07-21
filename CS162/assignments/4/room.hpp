#ifndef ROOM_HPP
#define ROOM_HPP
#include <cstdlib>
#include "floor.h"
#include "roomba.h"
#include "randomAI.h"

template <class T>
class Room {
	private:
		Floor floor;
		T *obj;
	public:
		Room(){};
		void setRoomba(T* t) {
			obj = t;
		}
		void initRoom(char *argv[]) {

			floor.setRow(atoi(argv[6]));
			floor.setCol(atoi(argv[8]));
			obj->template setBattery(atoi(argv[4]));
			obj->template setPrintMoves(atoi(argv[10]));

			floor.moveCount = 0;
			floor.initFloor(argv[2]);
		}
		void cleanRoom() {
			if(obj != NULL) {
				obj->cleanFloor(floor);
			}
		}
};

#endif