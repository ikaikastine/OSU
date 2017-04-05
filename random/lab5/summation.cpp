#include <iostream>
#include <cmath>

using namespace std;


void summation(int n);


int main () {
	
	int n;
	
	cout << "Please enter a value for n" << endl;
	cin >> n;

	summation(n);

	return 0;
}

void summation(int n) {
	int x = 1, sum;	
	while (x <= n) {

		sum = pow (1.0,5.0) + 10;
		x++;
	}
	cout << sum;
}
		
