/******************************************************
** Program: dumbAI.cpp
** Author: Kevin Stine
** Date: 05/26/2015
** Description: functions for the dumb AI
** Input: None
** Output: None
******************************************************/

#include <stdlib.h>
#include <time.h>
#include "dumbAI.h"
#include "randomAI.h"

/*********************************************************************
** Function: cleanFloor
** Description: dumb AI to clean the floor
** Parameters: Floor &floor
** Pre-Conditions: None
** Post-Conditions: None
*********************************************************************/ 
void dumbAI::cleanFloor(Floor &floor) {
	bool up = false;
	bool right = true;
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