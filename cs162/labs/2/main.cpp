#include <iostream>
#include "Date.h"

using namespace std;

int checkDate(int m, int d, int y);

int main() {
	int month, day, year;
	Date x;
	int valid;

	cout << "Please enter a value for month ";
	cin >> month;
	cout << "Please enter a value for the day ";
	cin >> day;
	cout << "Please enter a value for the year ";
	cin >> year;
	
	x.setDate(month, day, year);
	valid = checkDate(month, day, year);
	
	if (valid == 1) { 
		x.printDate();
	}

	else { 
		return 0;
	}


	return 0;
}
