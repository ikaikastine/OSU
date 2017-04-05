/***************
 * Program Name: test.cpp
 * Author: Kevin Stine
 * Description: Test
 * Input:
 * Output:
 **************/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int answer;

	cout << "Do you like vi? (1 for yes, 0 for no)" << endl;
	cin >> answer;

	if (answer==1) {
		cout << "You love vi!" << endl;
	}

	else if (answer==0) {
		cout << "You hate vi!" << endl;
	}

	return 0;
} 
