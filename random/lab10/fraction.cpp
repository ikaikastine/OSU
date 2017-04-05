#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;


class Fraction {	
	public:
		Fraction();
		Fraction(int, int);	  
		int set_numerator(int num) {numerator = num;} 
		int set_denominator(int denom) {denominator = denom;}
		double get_fraction_value(); 
		int GCD(int, int);
		int reduce(int a, int b);
	private:
		int numerator;
		int denominator;
};

Fraction::Fraction(int a, int b) {
	numerator = 1;
	denominator = 1;
	reduce(a, b);
}

Fraction::Fraction() {
}

int Fraction::GCD(int a, int b) {
	if (a == 0 || b == 0) {
			return 0;
		}
	else {
		int a1, b1, c = 0;
		if (a >= b) {
			a1 = b;
			b1 = a;
		}
		else {
			a1 = b;
			b1 = a;
		}
	while (b1 != 0) {
		c = a1 % b1;
		a1 = b1;
		b1 = c;
	}
	return a1;
	}
}

int Fraction::reduce(int numerator, int denominator) {
	//cout << "DEBUGGING: NUMERATOR: " << numerator << " DENOMINATOR: " << denominator << endl;
	if (numerator == 0 || denominator == 0) {
		numerator = 0;
		denominator = 0;
	}
	else {
		int gcd = GCD(numerator, denominator);
		numerator /= gcd;
		denominator /= gcd;
		//cout << "DEBUGING: GCD IN REDUCE FUNCTION IS: " << gcd << endl;
		cout <<"The reduced fraction is: " << numerator << "/" << denominator << endl;
		//cout << "DEBUGGING: NUMERATOR: " << numerator << "DENOMINATOR: " << denominator << endl;
		return numerator, denominator;
	}
}
 
int main() {
	int a, numerator, denominator;
	float b; 
	float answer;
	
	Fraction frac;
	
	cout << "Enter a numerator: ";
	cin >> a;
	cout << "Enter a denominator: ";
	cin >> b;
	
	if (b == 0) {
		cout << "Error: attempt to divide by zero " << endl;
		return 0;
	}

	answer = a/b;
	cout << "\nThe result of your fraction is " << answer << endl;
	frac.reduce(a, b);
	return 0;
}



