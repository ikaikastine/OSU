#include <iostream>
#include "PatientAccount.h"

using namespace std;


PatientAccount::PatientAccount() {
	days = 0;
	charges = 0;
	dailyRate = 2500;
} 

PatientAccount::~PatientAccount() {
	delete days;
	delete charges;
	delete dailyRate;
	days = NULL;
	charges = NULL;
	dailyRate = NULL;
}						

PatientAccount::PatientAccount(int userDays, double userCharges, const double dailyRate) {
	days = userDays;
	charges = userCharges;
	dailyRate = 2500;
}

PatientAccount::PatientAccount(const PatientAccount&);	 

/*
void setDailyRate() {
	dailyRate = 300;
}
*/

double getDailyRate() {
	int rate = PatientAccount.dailyRate;
	return rate;
}


void setDays(int days) {
	PatientAccount.days = days;
}

void setCharges(double surgeryCost, double medCost, int days) {
	int totalCost = surgeryCost + medCost + (days * PatientAccount.dailyRate);
	PatientAccount.charges = totalCost;
}

double getCharges() {
	int charges = PatientAccount.charges;
	return charges;
}

int getDays() {
	return PatientAccount.days;
}