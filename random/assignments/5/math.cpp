/************************
 * Program Filename: math.cpp
 * Author: Kevin Stine
 * Date: 5/31/14
 * Input: numbers
 * Output: slope of a line, length of a line, sum of 2 vectors
 ***********************/

#include <iostream>
#include <math.h> //for sqrt

using namespace std;

//Struct declaring point
struct point {
	int x;
	int y;
};

//Struct declaring line
struct line {
	point a;
	point b;
};

//Calculate the length of the line
float line_length(line L){

	int deltaX=(L.b.x-L.a.x);
	int deltaY=(L.b.y-L.a.y);
	return sqrt((pow(deltaX,2.0))+((pow(deltaY,2.0))));

}

//Calculate the slope of the line
float line_slope(line L){

	float deltaX=(L.b.x-L.a.x);
	float deltaY=(L.b.y-L.a.y);
	return (deltaY/deltaX);

}

//Calculcate the sum of two vectors
point line_sum(line L, line M) {

	struct point n;
	n.x = (M.b.x - M.a.x) + (L.b.x - L.a.x);
	n.y = (M.b.y - M.a.y) + (L.b.y - L.a.y);
	return n;

}

int main() {

	struct point start_1;
	struct point end_1;
	struct line one;
	struct point start_2;
	struct point end_2;
	struct line two;
	struct line final;
	struct point origin;
	origin.x = 0;
	origin.y = 0;

	start_1.x=0;
	start_1.y=0;
	end_1.x=6;
	end_1.y=3;
	one.a=start_1;
	one.b=end_1;
	
	start_2.x=0;
	start_2.y=2;
	end_2.x=4;
	end_2.y=9;
	two.a=start_2;
	two.b=end_2;
	struct point sum = line_sum(one, two);

	final.a = origin;
	final.b = sum;


	cout << "\nVector 1 from: " << "(" << start_1.x << "," << start_1.y << ")" 
		<< " to (" << end_1.x << "," << end_1.y << ")" << endl;

	cout << "Vector 2 from: " << "(" << start_2.x << "," << start_2.y << ")" 
		<< " to (" << end_2.x << "," << end_2.y << ")" << endl;	
	
	cout << "\nLength of Vector 1: " << line_length(one) << endl;
	cout << "Length of Vector 2: " << line_length(two) << endl;

	cout << "\nSlope of Vector 1: " << line_slope(one) << endl;
	cout << "Slope of Vector 2: " << line_slope(two) << endl;
	
	cout << "\nSum of the two vectors creates a new vector from: (" << start_1.x << "," << start_1.y << ")"
		<< " to " << "(" << sum.x << ", " << sum.y << ") with a length of: " << line_length(final) << endl;

	return 0;
} 
