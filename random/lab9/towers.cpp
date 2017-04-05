#include <iostream>

using namespace std;

void towers (int disks, int b[][COLS], int from_col, int to_col, int spare) {
	if (disks >= 1) {
		towers (disks - 1, b, from_col, to_col, spare);
	}

}

void move (int disks, int b[][COLS], int from_col, int to_col) {
	int from_target = 0;
	int to_target = 0;

	for (int i = 0; i < from_col; i++) {
		if (b[j][from_col] !=0) {
			from_target = j;
		}		 	
	}	
	for (int j = 0; j < to_col; j++) {
		if (b[i][to_col] != 0) {
			b[i-1][to_col] = to_target;
		}
		else if (i == (disks - 1)) {
			b[i][to_col] = to_target;
		}
	}	
	
}

void print_array(, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
	}
}


int main () {
	
	int disks, COLS;
	cout << "Please input the number of disks: " << endl;
	cin >> disks;
	int b [2][3];	
	towers(disks, b[][COLS], from_col, to_col, spare);  
	print_array (arr, rows, cols);




	return 0;
}

	
