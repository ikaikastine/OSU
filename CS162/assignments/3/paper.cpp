/******************************************************
 ** Program: paper.cpp
 ** Author: Kevin Stine
 ** Date: 05/09/2015
 ** Description: Functions for paper class
 ** Input: None
 ** Output: None
 ******************************************************/
#include "paper.h"

Paper::Paper() {
    strength = 0;
    type = 'p';
}

Paper::Paper(int val) {
    strength = val;
    type = 'p';
}

bool Paper::fight(Tool AI) {
    int temp = strength;
    if(AI.getType() == 'r') {
        temp = strength*2;
    }
    else if (AI.getType() == 's') {
        temp = strength/2;
    }
    return temp > AI.getStrength();
}

void Paper::operator=(const Paper &other) {
    strength = other.strength;
    type = other.type;
}

Paper::Paper(const Paper &other) {
    strength = other.strength;
    type = other.type;
}

Paper::~Paper() {
    
}