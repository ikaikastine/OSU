#include <string>
#include <iostream>
#include <fstream>
#include "./patient_account.h"
#include "./pharmacy.h"
#include "./surgery.h"

using namespace std;

surgery::surgery() {
	types = 5;
	amount = new float[5];
	names = new string[5];
	amount[0] = 55.00;
	amount[1] = 249.00;
	amount[2] = 890.78;
	amount[3] = 374.99;
	amount[4] =  5000.00;
	names[0] = "Tonsils";
	names[1] = "ACL Repair";
	names[2] = "Heart Surgery";
	names[3] = "Appendix";
	names[4] = "Kidney Transplant";
}

surgery::surgery(const surgery &other) {
	types = other.types;
	amount = new float[types];
	names = new string[types];
	for (int i = 0; i < types; i++) {
		amount[i] = other.amount[i];
		names[i] = other.names[i];
	}
}

surgery::~surgery() {
	delete [] amount;
	delete [] names;
}

float surgery::cost(int i) {
	return amount[i];
}
string surgery::name(int i) {
	return names[i];
}
int surgery::type() {
	return types;
}
