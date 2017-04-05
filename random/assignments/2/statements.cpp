/********************
 * Program Filename: statements.cpp
 * Author: Kevin Stine
 * Description:
 * Input:
 * OutPut:
 *******************/

#include <iostream>
#include <cfloat>

using namespace std;


int main() {

	int num, remainder, i=1, sum=0, count_flt, count_flt_ep, count_dbl, count_dbl_ep;
	float user_num, user_epsilon;
	double dbl_num, dbl_epsilon;

	cout << "Please enter a decimal number" << endl;
	cin >> num;	
	if (num < 0) {
		cout << "That is not in the correct range" << endl;
		return 0;
	}
	else 
	cout << num; 
		do {
                	remainder = num%2;
                	sum = sum + (i*remainder);
                	num = num / 2;
                	i = i*10;
        	}
		while (num > 0);
	
	cout << " converted to binary is: " << sum << endl;

	// Ask user for float number and epsilon
	cout << "\n";
	cout << "Please enter a float number" << endl;
	cin >> user_num;
	cout << "Please enter a float epsilon" << endl;
	cin >> user_epsilon;	

	 while (user_num > FLT_EPSILON) {
                user_num = user_num - .01;
                count_flt++;
        }

        while (user_epsilon > FLT_EPSILON) {
                user_epsilon = user_epsilon - .01;
                count_flt_ep++;
        }

	cout << "\n";	
        cout << "Number of float number iterations when subtracting .01: " << count_flt << endl;
	cout << "Number of float epsilon iterations when subtracting .01: " << count_flt_ep << endl;

	// Ask user for double number and epsilon
	cout << "\n";
	cout << "Please enter a double number" << endl;
	cin >> dbl_num;
	cout << "Please enter a double epsilon" << endl;
	cin >> dbl_epsilon;

	while (dbl_num > DBL_EPSILON) {
		dbl_num = dbl_num - .01;
		count_dbl++;
	}
	
	while (dbl_epsilon > DBL_EPSILON) {
		dbl_epsilon = dbl_epsilon - .01;
		count_dbl_ep++;
	}
	
	cout << "\n";
	cout << "Number of double number iterations when subtracting .01: " << count_dbl << endl; 
	cout << "Number of double epsilon iterations when subtracting .01: " << count_dbl_ep << endl;

/*	do {
		user_num - .01;
	}
	while (user_num > FLT_EPSILON);
	cout << user_num << endl;	
*/
	return 0;
}

