/***************************************************************************
 * Program Filename: integration.cpp
 * Author: Kevin Stine
 * Date: 5/19/14
 * Description: Program to calculate the area under the curve of specific functions
 * Input: Takes the input from the command line   
 * Output: Parses in the input from the command line to find the area under a curve 
 ***************************************************************************/

#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<string>
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

/* Rectangle Method:
 * Input: Takes in the starting point a, ending point b, number of n iterations, and function
 * Output: The total area under the curve of the specified function using rectangles 
 */
 
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

/* Trapezoid Method:
 * Input: Takes in the starting point a, ending point b, number of n iterations, and function
 * Output: The total area under the curve of the specified function using trapezoids
 */
 
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

int main(int argc, char *argv[]) {

		int i, m, f, choice, a, b, n, rectangle, trapezoid, method_r, method_t;
		string method;
		
		if (argc == 11) {   //Checks to see if there are 11 arguments from the command line 
			for (i = 1; i < argc; i++) {   //Runs through each of the inputs from the command line and checks each one
				if (string(argv[i]) == "-f") {
					choice = atoi(argv[i+1]);
				}
				if (string(argv[i]) == "-a") {
					a = atoi(argv[i+1]);
				}
				if (string(argv[i]) == "-b") {
					b = atoi(argv[i+1]);
				}
				if (string(argv[i]) == "-m") {
					if ((argv[i+1]) == "r") {
						method_r = rectangle;
					}
					else if ((argv[i+1]) == "t") {
						method_t = trapezoid;
					}
				}
				if (string(argv[i]) == "-n") {
					n = atoi(argv[i+1]);
				}
			}
		
			if (method_r == rectangle) {
				cout << "\nThe area under " << funcname[choice] << " between " << a << " and " << b << " is: " << rect_method(a, b, n, choice) << endl;
				cout << "\n";
			}
		
			if (method_t == trapezoid) {
				cout << "\nThe area under " << funcname[choice] << " between " << a << " and " << b << " is: " << trap_method(a, b, n, choice) << endl;
				cout << "\n";
			}
		}
	
		else {  //Error if there are not enough inputs from the command line
                        cout << "\n";
			cout << "Not enough or invalid arguments, please try again." << endl;
			cout << "The correct format is: -f <function>, -a <starting point>, -b <ending point>, -n <n iterations>, -m <method> in any order." << endl;
                        cout << "\n";
			return 0;
                }	

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
		   
