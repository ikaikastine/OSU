#include <iostream>
#include <string>
#include "Pharmacy.h"

using namespace std;

Pharmacy::Pharmacy() {
	for (int i = 0; i < 5; i++) {
		medCost[i] = 0;
		medName[i] = ' ';
	}
}

Pharmacy::~Pharmacy() {
	delete [] medCost;
	delete [] medName;
	for (int i = 0; i < 5; i++) {
		medCost[i] = NULL;
		medName[i] = ' ';
	}
}				 
/*
Pharmacy::Pharmacy(double userMedCost, string userMedName) {
	medCost = userMedName;
	medName = userMedName;
}		
*/

Pharmacy::Pharmacy(const Pharmacy&);

void printMedList() {
	for (int i = 1; i <= 5; i++) {
		cout << "Medicine " << i << ": " << Pharmacy.medName[i] << ", Cost: " << Pharmacy.medCost[i] << endl;
	}
}

double setUserMed(int userMedName) {
	switch (userMedName) {
		case 1:
			medName[1] = "Advil";
			medCost[1] = 10;
			break;
		case 2:
			medName[2] = "Penicillin";
			medCost[2] = 100;
			break;
		case 3:
			medName[3] = "Accutane";
			medCost[3] = 200;
			break;
		case 4:
			medName[4] = "Morphine";
			medCost[4] = 1000;
			break;
		case 5:
			medName[5] = "Amiloride"
			medCost[5] = 20000;
			break;
		default:
			break;
	}
}
int getMedName();