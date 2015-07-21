#include <string>
#include <iostream>
#include <fstream>
#include "./patient_account.h"
#include "./pharmacy.h"
#include "./surgery.h"

using namespace std;

pharmacy::pharmacy() {
	types = 5;
	amount = new float[5];
	names = new string[5];
	amount[0] = 100.00;
	amount[1] = 125.95;
	amount[2] = 42.95;
	amount[3] = 160.00;
	amount[4] = 238.00;
	names[0] = "Advil";
	names[1] = "Amoxicillin";
	names[2] = "Plavix";
	names[3] = "Singulair";
	names[4] = "Epogen";
}

pharmacy::pharmacy(const pharmacy &other) {
	types = other.types;
	amount = new float[types];
	names = new string[types];
	for (int i = 0; i < types; i++) {
		amount[i] = other.amount[i];
		names[i] = other.names[i];
	}
}

pharmacy::~pharmacy() {
	delete [] amount;
	delete [] names;
}

float pharmacy::cost(int i) {
	return amount[i];
}
string pharmacy::name(int i) {
	return names[i];
}
int pharmacy::type() {
	return types;
}
