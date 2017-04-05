#include <iostream>
#include <cmath>

using namespace std;

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
		
int main () {
	int a, b, c, answer;
	start:
	cout << "Please enter 2 positive integers. " << endl;
	cin >> a >> b; 

	count_up(a, b);
	count_down(a, b);
	count_middle(a,b);
	
	cout << "\n";
	cout << "Would you like to run again with 2 different numbers? (Enter 1 for yes, 2 for no)" << endl;
	cin >> answer;

	if (answer == 1) {
		goto start;
	}
	else return 0;
}
