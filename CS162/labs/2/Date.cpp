#include <iostream>
#include "./Date.h"
#include <string>
#include <cstdio>

using namespace std;

int checkDate(int, int, int);

Date::Date() {
	month = 1;
	day = 1;
	year = 2001;
}

Date::Date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

void Date::setDate(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

int Date::getDate() {
	


}


void Date::printDate() {
	printf ("%d/%d/%d \n", month, day, year);
	const string dateArr[] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	//cout << dateArr[month] << " " << day << " " << year;
	//cout << " " << day << " " << year;
	//printf ("%s %d, %d \n", (dateArr[month]).c_str(), day, year);
	//printf ("%d %s %d \n", day, dateArr[month], year);	
}

int checkDate(int m, int d, int y) {
	if (m > 12 || m < 1) {
		cout << "Invalid input." << endl;
		cout << "Valid months are between 1 and 12" << endl;
		return 0;
	}

	if (m == 2 && (d > 28 || d < 1)) {
		cout << "Invalid input." << endl;
		cout << "Valid days for this month are between 1 and 28" << endl;
		return 0;
	}

	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 31 || d < 1)) {
		cout << "Invalid input." << endl;
		cout << "Valid days for this month are between 1 and 31" << endl;
		return 0;
	}

	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30 || d < 1)) {
		cout << "Invalid input." << endl;
		cout << "Valid days for this month are between 1 and 30" << endl;
		return 0;
	}
	return 1;	
}







	
