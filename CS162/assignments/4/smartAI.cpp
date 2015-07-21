/******************************************************
** Program: smartAI.cpp
** Author: Kevin Stine
** Date: 05/26/2015
** Description: functions for the smart AI
** Input: None
** Output: None
******************************************************/

#include <stdlib.h>
#include <iostream>
#include "smartAI.h"

using namespace std;

/*********************************************************************
** Function: cleanFloor
** Description: smart AI to clean the floorplan
** Parameters: Floor &floor
** Pre-Conditions: None 
** Post-Conditions: None 
*********************************************************************/ 
void smartAI::cleanFloor(Floor &floor) {
	bool up = false;
	bool right = true;
	bool cleaned;
	while (battery > 0) {
		floor.clean();
		if (up == true) {
			if (floor.up() == false) {
				if(right == true) {
					if(floor.right() == false) {
						right = false;
						floor.left();
					}
				}
				else {
					if(floor.left() == false) {
						right = true;
						floor.right();
					}
				}
				up = false;
			}
		}
		else if(up == false) {
			if (floor.down() == false) {
				if (right == true) {
					if (floor.right() == false) {
						right = false;
						floor.left();
					}
				}
				else {
					if (floor.left() == false) {
						right = true;
						floor.right();
					}
				}
				up = true;
			}
		}
		update(floor);
	}
}