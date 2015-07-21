#include <string>
#include <iostream>
#include <fstream>
#include "./patient_account.h"
#include "./pharmacy.h"
#include "./surgery.h"
using namespace std;

patient::patient() {
	total_charge = 0;
	days = 0;
	cout << "Enter the patient's name: ";
	getline(cin, name);
	ofstream output;
	output.open("hospital.txt");
	output << name;
	output.close();
}

patient::patient(string iname) {
	total_charge = 0;
	days = 0;
	name = iname;
	ofstream output;
	output.open("hospital.txt");
	output << name;
	output.close();
}

patient::patient(const patient &other) {
	total_charge = other.total_charge;
	days = other.days;
	name = other.name;
}

patient::~patient() {};

void patient::add_surg() {
	bool cont = false;
	do {
		cont = false;
		cout << "Add a surgery" << endl;
		for (int i = 0; i < surg.type(); i++) {
			cout << i+1 << ": " << surg.name(i) << "\t$" << surg.cost(i) << endl;
		}
		cout << "0: Skip surgery and checkout" << endl;
		int input = 0;
		cin >> input;
		if (input == 0)
			return;
		else if (input > surg.type() || input < 0) {
			cout << "Incorrect option. Try again." << endl;
			cont = true;
		}
		else {
			total_charge += surg.cost(input-1);
			ofstream output;
			output.open("hospital.txt", ios::app);
			output << "|surg|" << surg.name(input-1) << "|" << surg.cost(input-1);
			output.close();
		}
	} while(cont);
}

void patient::add_meds() {
	bool cont = true;
	do {
		cout << "Add meds" << endl;
		for (int i = 0; i < meds.type(); i++) {
			cout << i+1 << ": " << meds.name(i) << "\t$" << meds.cost(i) << endl;
		}
		cout << "0: Add a surgery" << endl;
		int input = 0;
		cin >> input;
		if (input == 0)
			return;
		else if (input > meds.type() || input < 0) {
			cout << "Incorrect option. Try again." << endl;
		}
		else {
			total_charge += meds.cost(input-1);
			ofstream output;
			output.open("hospital.txt", ios::app);
			output << "|meds|" << meds.name(input-1) << "|" << meds.cost(input-1);
			output.close();
		}
	} while(cont);
}

void patient::checkout() {
	cout << "Duration of patient's stay in days: ";
	cin >> days;
	total_charge += days * 100;
	ofstream output;
	output.open("hospital.txt", ios::app);
	output << "|" << days;
	output.close();
	cout << "Total charges: $" << total_charge << endl;
}
