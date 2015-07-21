#ifndef FLOOR_H
#define FLOOR_H
#include <vector>

using namespace std;

class Floor {
	private:
		vector <vector <char> > v;
		int row; 
		int col; 
		int roomSize;
	public:
		void setRow(int);
		void setCol(int);
		void initFloor(char*);
		void printFloor();
		int getRow();
		int getCol();
		void clean();
		bool up();
		bool down();
		bool left();
		bool right();
		void update();
		void setMoveCount();
		int moveCount;
		int getRoomSize();
		bool checkClean();

};

#endif