/******************************************************
 ** Program: scissors.cpp
 ** Author: Kevin Stine
 ** Date: 05/09/2015
 ** Description: Functions for scissors class
 ** Input: None
 ** Output: None
 ******************************************************/
#include "scissors.h"

Scissors::Scissors() {
    strength = 1;
    type = 's';
}

Scissors::Scissors(int val) {
    strength = val;
    type = 's';
}

bool Scissors::fight(Tool AI) {
    int temp = strength;
    if(AI.getType() == 'p') {
        temp = strength*2;
    }
    else if (AI.getType() == 'r') {
        temp = strength/2;
    }
    return temp > AI.getStrength();
}

void Scissors::operator=(const Scissors &other) {
    strength = other.strength;
    type = other.type;
}

Scissors::Scissors(const Scissors &other) {
    strength = other.strength;
    type = other.type;
}

Scissors::~Scissors() {
    
}