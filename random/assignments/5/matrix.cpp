/****************
 * Program Name: Matrix.cpp
 * Author: Kevin Stine
 * Date: 5/26/14
 * Description: Creates a N x N matrix from inputs from user
 * Input: 2 numbers
 * Output: Matrix using the sum of the numbers around which were given by the user
 ****************/

#include <iostream>
#include <stdlib.h>
#include <valarray> 

using namespace std;

//Create initial array using user values
int **make_init_Array (int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

//Create secondary array to house new matrix
int **make_new_Array (int rows, int cols) {
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++) {
		temp[i] = new int[cols];
	}
	return temp;
}

//Populate the array with inputs from the user
void populateArray (int **arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = (i * rows) + j;
		}
	}
}

//Print the array with input variables
void printArray (int **arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] < 10) {
				cout << arr[i][j] << "  ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
} 

//Fill the new array iteratively
//temp is new array, arr is old array, r and x are rows and cols
void calculate_result (int **temp, int **arr, int r, int c) {
	int total = 0, i, j, n = 0, m = 0, z; 
	for (int q = 0; q < (r-1); q++) {
		for (z = 0; z < (c-1); z++) {
			for (i = 0 + n; i < 2 + n; i++) {
				for (j = 0 + m; j < 2 + m; j++) {
					total = total + arr[i][j]; 
				}
			}
			temp[q][z] = total;
			total = 0;
			m++;
		}
		m = 0;
		if (n < r){
			n++;
		}
	}
} 

//Fill the new array recursively
//temp is new array, arr is old array, r and c are rows and cols of old,
//x and y store current position in the new array.
//Each time this function is called, it fills a new value in temp, and
//then shifts to the next position in question before calling itself again.
int** recursive_calculate_result( int **temp, int **arr, int r, int c, int x, int y) {
	
	temp[x][y] = arr[x][y] + arr[x+1][y] + arr[x][y+1] + arr[x+1][y+1];//Sums 4 coresponding values
	if (x < (c-2)) {
		x++; //shifts one column
		recursive_calculate_result (temp, arr, r, c, x, y);
	}
	else if ((x == (c-2)) && (y == (r-2))) { //Exit case, if at the bottom corner of the new array
		return temp;
	}
	else if (x == (c-2)) { //Resets x and increments y if at the right edge of the new array
		x = 0;//moves back to column 0
		y++;//moves down one row
		recursive_calculate_result (temp, arr, r, c, x, y);
	}

}


int main () {

	int rows, cols;
	cout << "Please enter 2 numbers for the N x N matrix." << endl;
	cin >> rows >> cols;
	cout << endl;

	int **arr = make_init_Array(rows, cols);
	populateArray (arr, rows, cols);
	cout << "Here is your " << rows << " x " << cols << " array:" << endl;
	printArray (arr, rows, cols);

	int **iterative_result = make_new_Array(rows - 1, cols - 1);
	calculate_result (iterative_result, arr, rows, cols);
	cout << "\nHere is the resulting " << rows - 1 << " x " << cols - 1 << " array ";
	cout << "whose values are sums of the four neighboring elements \ncorresponding to each position:" << endl; 	
	int **temp = make_new_Array(rows - 1, cols - 1);

	int **recursive_result = recursive_calculate_result(temp, arr, rows, cols, 0, 0);	
	cout << "Result using recursion: " << endl;
	printArray (recursive_result, rows -1, cols -1);
	cout << "Result using iteration: " << endl;
	printArray (iterative_result, rows -1, cols -1);

	delete [] arr;
	delete [] temp;
	return 0;
}	
