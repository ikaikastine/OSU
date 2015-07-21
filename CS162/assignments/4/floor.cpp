/******************************************************
** Program: floor.cpp
** Author: Kevin Stine
** Date: 05/26/2015
** Description: Functions for all the floor
** Input: File to be read for floorplan
** Output: Prints out the floor as it gets cleaned
******************************************************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "floor.h"

using namespace std;

/*********************************************************************
** Function: printFloor
** Description: prints the floor
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: Floor printed
*********************************************************************/ 
void Floor::printFloor() {
	cout << "-------" << endl;
	//cout << "Move " << moveCount << ":" << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

/*********************************************************************
** Function: initFloor
** Description: initializes the floor 
** Parameters: char *file
** Pre-Conditions: None
** Post-Conditions: None
*********************************************************************/ 
void Floor::initFloor(char *file) {
	int count = 0;
	string line;
	fstream output;

	output.open(file, fstream::in | fstream::out | fstream::app);

	while(getline(output, line)) {
		v.resize(count + 1);
		for (int i = 0; i < line.length(); i++) {
			if (!(isspace(line[i]))) {
				v[count].push_back(line[i]);
			}
		}
		count++;
	}

	output.close();
	v[row][col] = 'r';
	moveCount++;
	printFloor();
}

//Sets the rows
void Floor::setRow(int r) {
	row = r;
}

//Sets the columns
void Floor::setCol(int c) {
	col = c;
}

//Gets the rows
int Floor::getRow() {
	return row;
}


//Gets the coloumns
int Floor::getCol() {
	return col;
}

//Sets the floor to clean
void Floor::clean() {
	v[row][col] = 'c';
}

//Updates the floor with the position of the roomba
void Floor::update() {
	v[row][col] = 'r';
}

//Checks the floorplan up to see if it is at the top
bool Floor::up() {
	if (row == 0) {
		return false;
	}
	else {
		row--;
		return true;
	}
}

//Checks the floorplan down to see if it is at the bottom
bool Floor::down() {
	if(row == v.size()-1) {
		return false;
	}
	else {
		row++;
		return true;
	}
}

//Checks the floorplan right to see if it is at the right side
bool Floor::right() {
	if (col == v[row].size()-1) {
		return false;
	}
	else {
		col++;
		return true;
	}
}

//Checks the floorplan left to see if it is at the left side
bool Floor::left() {
	if(col == 0) {
		return false;
	}
	else {
		col--;
		return true;
	}
}

//Sets moveCount to 0
void Floor::setMoveCount() {
	moveCount = 0;
}

//Gets the size of the room
int Floor::getRoomSize() {
	int col = v[col].size() - 1;
	int row = v[row].size() - 1;
	int floorSize = col + row;

	roomSize = floorSize;
}