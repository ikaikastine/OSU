/******************************************************
** Program: roomba.cpp
** Author: Kevin Stine
** Date: 05/26/2015
** Description: functions for the roomba
** Input: None
** Output: None
******************************************************/

#include <iostream>
#include <unistd.h>
#include "roomba.h"

//Sets the battery
void Roomba::setBattery(int b) {
	battery = b;
}

//Gets the battery
int Roomba::getBattery() {
	return battery;
}

//Set the number of moves
void Roomba::setMoves(int m) {
	numMoves = m;
}

//Get the number of moves
int Roomba::getMoves() {
	return numMoves;
}

//Set the number of moves to print
void Roomba::setPrintMoves(int m) {
	printMoves = m;
}

//Gets the number of moves to print
int Roomba::getPrintMoves() {
	return printMoves;
}

//Updates the floorplan
void Roomba::update(Floor &floor) {
	floor.update();
	battery--;
	numMoves++;
	if (numMoves % printMoves == 0) {
		floor.printFloor();
		usleep(500000);
	}
}