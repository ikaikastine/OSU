#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

bool is_positive_int_recurse(string a);

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

int main (int argc, char *argv[]) {
	int b, c, w, answer;
	string a;
	int i = 0;
		w = is_positive_int_recurse(i,argv[1]);
		if (w == false) {
			cout << "That is not a positive integer" << endl;
		}
		if (w == true) {
			cout << "That is a positive integer" << endl;
		}		
		 
	return 0;
}
