/*
 * state.cpp
 *
 *  Created on: Apr 25, 2014
 *      Author: eecs162
 */
#include <iostream>
#include <cstring>
#include "state.h"

using namespace std;

void state::set_name(const char *n) {
	//cout << "DEBUG: n = " << n << endl;
	//cout << "DEBUG: name = " << name << endl;
	name = new char [256];
	strcpy(name, n);
}

void state::set_pop(int n){
    this->pop=n;
}

void state::display_pop() {
	cout << "state, " << name << ", pop: " << pop << endl;
}

state::state() {
	pop=0;
	name=NULL;
}

state::state(int value) {
	pop = 0;
	name = NULL;
}

state::~state() {

}

