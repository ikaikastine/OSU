/******************************************************
 ** Program: rock.cpp
 ** Author: Kevin Stine
 ** Date: 05/09/2015
 ** Description: Functions for rock class
 ** Input: None
 ** Output: None
 ******************************************************/
#include "rock.h"

Rock::Rock() {
    strength = 1;
    type = 'r';
}

Rock::Rock(int val) {
    strength = val;
    type = 'r';
}

bool Rock::fight(Tool AI) {
    int temp = strength;
    if(AI.getType() == 's') {
        temp = strength*2;
    }
    else if (AI.getType() == 'p') {
        temp = strength/2;
    }
    return temp > AI.getStrength();
}

void Rock::operator=(const Rock &other) {
    strength = other.strength;
    type = other.type;
}

Rock::Rock(const Rock &other) {
    strength = other.strength;
    type = other.type;
}

Rock::~Rock() {
    
}