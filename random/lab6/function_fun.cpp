#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

void get_positive_int();
int is_positive_int(string a);
bool is_positive_int_recurse(string a);

void get_positive_int() {
	string a, b;
	bool not_int;
	int w ,x;
	do {

		cout << "Please enter a positive integer" << endl;
		cin >> a;
	
		w = is_positive_int(a);
		if (w == 0) { 	
			cout << "Invalid input. Please enter another integer." << endl;
		}
	}
	while (w == 0);

	int dec_num = atoi(a.c_str());	
	 
}

int is_positive_int(string a) {
	int x = 0;
	
	for (int i=0; i < a.size(); i++) {
		if (a[i] < '0' || a[i] > '9') {
			x = 1;
		}			 
	}	
	if (x == 0) {
		return 1;
	}
	else return 0;
}

bool is_positive_int_recurse(int i, string a) {
	if (i == a.size()) {
		return true;
	}
	if (a[i] < '0' || a[i] > '9') {
       		return false;
	}
	else {	
		return is_positive_int_recurse(i+1, a);      
		
	}
}
/*
 
void count_up(int x, int y) {

	for (int i=0; i <= x; i++) {
		cout << i << " ";
	}
	cout << "\n";
}

void count_down(int x, int y) {

	for (int i=0; i <= x; x--) {
		cout << x << " ";
	}
	cout << "\n";
}

void count_middle(int x, int y) {

	if (x > y) {
		for (int i=x; i >= y; i--) {
			cout << i << " ";
		}
	}
	if (x < y) {
		for (int i=y; x <= y; x++) {
			cout <<  x << " ";
		}
	}
}
*/
		
int main (int argc, char *argv[]) {
	int b, c, w, answer;
	string a;
	int i = 0;
	do {	
		do {
			cout << "Please enter a positive integer" << endl;
			cin >> a;
			//call functions
			w = is_positive_int_recurse(i,a);
			if (w == false) {
				cout << "Invalid Input. Please enter another integer" << endl;
			}
		} 
		while (w == false);
		//get_positive_int();
		//count_up(a, b);
		//count_down(a, b);
		//count_middle(a,b);
		
		cout << "The number you entered is a positive integer!" << endl;
		cout << "Would you like to run again with a different number? (Enter 1 for yes, 2 for no)" << endl;
		cin >> answer;
	}
	while (answer == 1);
	return 0;
}
