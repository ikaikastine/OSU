/******************************************************
** Program: main.cpp
** Author: Kevin Stine
** Date: 05/26/2015
** Description: Simulate Roomba 
** Input: None
** Output: Roomba is simulated
******************************************************/

#include <iostream>
#include "room.hpp"
#include "randomAI.h"
#include "smartAI.h"
#include "dumbAI.h"

using namespace std;

void chooseRoomba(Room <Roomba> &r);

/*********************************************************************
** Function: simulateRoomba
** Description: starts off the simulation
** Parameters: char *argv[]
** Pre-Conditions: Must have 11 arguments 
** Post-Conditions: None
*********************************************************************/ 
void simulateRoomba(char *argv[]) {
	Room <Roomba> r;
	chooseRoomba(r);
	r.initRoom(argv);
	r.cleanRoom();
}

/*********************************************************************
** Function: chooseRoomba
** Description: Allows the user to select an AI
** Parameters: Room <Roomba> &r
** Pre-Conditions: Must have 11 arguments
** Post-Conditions: None
*********************************************************************/ 
void chooseRoomba(Room <Roomba> &r) {
	int choice;
	cout << "Please select an AI for the Roomba (1 - Random, 2 - Dumb, 3 - Smart)" << endl;
	cin >> choice;
	if (choice == 1) {
		r.setRoomba(new randomAI);
	}
	else if (choice == 2) {
		r.setRoomba(new dumbAI);
	}
	else if (choice == 3) {
		r.setRoomba(new smartAI);
	}
}

int main(int argc, char *argv[]) {
	if (argc != 11) {
		cout << "Invalid number of arguments. Please provide 11." << endl;
		return 0;
	}
	else {
		simulateRoomba(argv);
	}
	return 0;
}