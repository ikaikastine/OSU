/******************************************************
 ** Program: tool.cpp
 ** Author: Kevin Stine
 ** Date: 05/09/2015
 ** Description: Functions for tool class
 ** Input: None
 ** Output: None
 ******************************************************/
#include "tool.h"

Tool::Tool() {}

void Tool::setStrength(int x) {
    strength = x;
}

void Tool::setType(int userType) {
    type = userType;
}

int Tool::getType() {
    return type;
}

int Tool::getStrength() {
    return strength;
}

bool Tool::fight(Tool) {
    return 0;
}

Tool::~Tool() {
    
}
