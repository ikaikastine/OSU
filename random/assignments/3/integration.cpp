/***************************************************************************
 * Program Filename: integration.cpp
 * Author: Kevin Stine
 * Date: 5/7/14
 * Description: Program to calculate the area under the curve of specific functions
 * Input:  
 * Output: The area under the curve of the specified fuction between the endpoints
 ***************************************************************************/

#include<iostream>
#include<cmath>	
using namespace std;

// Declare fuctions
double f1(double);
double f2(double);
double f3(double);
double f4(double);
double f5(double);
double rect_method(double a, double b, int n, int choice);
double trap_method(double a, double b, int n, int choice);

const char * funcname[6] = {
	"",
	"2x^5 + x^3 - 10x + 2",
	"6x^2 - x + 10",
	"5x + 3",
	"2x^3 + 120",
	"2x^2",
};

// Rectangle Method
double rect_method(double a, double b, int n_rect, int choice) {
	double (* fx) (double);
	switch (choice) {
		case 1: fx = f1; break;
		case 2: fx = f2; break;
		case 3: fx = f3; break;
		case 4: fx = f4; break;
		case 5: fx = f5; break;
	}
	double height, x, total_area, width, area;
	height = fx(x);	
	area = height * width;
	width = (b-a)/n_rect;
	total_area = 0;
	x = a;
		for (int i=1; i<=n_rect; i++) {
			x+=width;
			total_area+=width*fx(x);
		}
	return total_area;
}

// Trapezoid Method
double trap_method(double a, double b, int n_trap, int choice) {
        double (* fx) (double);
        switch (choice) {
                case 1: fx = f1; break;
                case 2: fx = f2; break;
                case 3: fx = f3; break;
                case 4: fx = f4; break;
                case 5: fx = f5; break;
        }
        double height, x, x2, total_area, width, area;
	x2 = (x * 2);
	height = (fx(x)+fx(x2))/2;
        area = height * width;
	width = (b-a)/n_trap;
        total_area = 0;
        x = a;
                for (int i=1; i<=n_trap; i++) {
                        x+=width;
                        total_area+=width*fx(x);
                }
        return total_area;
}

int main() {
	int choice, n, answer, n_rect, n_trap;
	double a, b;
	bool trap = false;
	bool rect = false;


	do {
		
		//Display functions available
		cout << "Functions available: \n" << endl;
		for (int i=1; i<6; i++) {
			cout << " " << i << " " << funcname[i] << endl;
		}	
		cout << "\nChoose a function (1, 2, 3, 4, 5, other(quit)): " ;
		cin >> choice;
		
		//Pick which method to caculate with
		if (choice >= 1 && choice <=5) {
			char method = ' ';
			do {
				cout << "\nWould you like to calculate the area using the rectangle, trapezoid, or both (1, 2, 3): " ;
				cin >> method;
			}
			while (method < '1' || method > '3');
			switch (method) {
				case '1':
					rect = true;
					trap = false;
					cout << "\nHow many rectangles do you want?: " ;
					cin >> n_rect;
					break;
				case '2':
					rect = false;
					trap = true;
					cout << "\nHow many trapezoids do you want?: " ;
					cin >> n_trap;
					break;
				case '3':
					trap = true;
					rect = true;
					cout << "\nHow many rectangles do you want?: " ;
					cin >> n_rect;
					cout << "\nHow many trapezoids do you want?: " ;
					cin >> n_trap;
					break;
			}

			cout << "\nPlease select a starting point, a: " ;
			cin >> a;

			cout << "\nPlease select an ending point, b: " ;
			cin >> b;

			if (rect) {
				cout << "\nThe area under " << funcname[choice] << " between " << a << " and " << b << " is: " << rect_method(a, b, n_rect, choice) << endl;
			}
		
			if (trap) {
				cout << "\nThe area under " << funcname[choice] << " between " << a << " and " << b << " is: " << trap_method(a, b, n_trap, choice) << endl;
			}

		}

	cout << "\nWould you like to calculate the area under the curve again? (Enter 1 for yes, 2 for no) " ;
	cin >> answer;
	
	}
	
	while (answer==1); 
	return 0;  
}
 		 
// define each funtion
double f1 (double x) {
		return 2.0*x*x*x*x*x + x*x*x -10.0*x +2;
	} 

double f2 (double x) {
		return 6.0*x*x - x + 10;
	}

double f3 (double x) {
		return 5.0*x + 3;
	}

double f4 (double x) {
		return 2.0*x*x*x + 120;
	}

double f5 (double x) {
		return 2.0*x*x;
	} 	
		   
