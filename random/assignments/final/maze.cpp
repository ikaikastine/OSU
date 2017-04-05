/********************************
 * Program Filename: maze.cpp
 * Author: Kevin Stine
 * Date: 6/8/14
 * Input: inputs from the user moving a character through a maze
 * Output: The maze as the user moves through it
 ******************************/ 



#include <iostream>
#include <stdlib.h>

using namespace std;

void movePlayer(char board[][20], int locX, int locY, int keyCount, bool &success, int &level);

//Struct which holds the data types for the locations and keycount
struct player {
	int locX_1; //X coordinate
	int locY_1; //Y coordinate
	int locX_2;
	int locY_2;
	int keyCount; //# of keys found
} location, key;

//Void function which prints out the array of the maze, and the location of the user
void printMaze(const char board[][20], int locX, int locY, int keyCount) {
	for (int x = 0; x < 20; x++) {
		for (int y = 0; y < 20; y++) {
			if ((x == locX) && (y == locY)) {
				cout << '@' << ' ';
			}
			else
				cout << board[x][y] << ' ';
		}
	cout << "\n";
	}
}

//Void function which moves the user up, checking to see if there are walls, keys, or doors
void moveUp(char board[][20], int locX, int locY, int keyCount, bool &success, int &level) {
	if (board[locX - 1][locY] == 'X') {
		system("clear");
		cout << "Invalid move. Please enter another move." << endl;
		movePlayer(board, locX, locY, keyCount, success, level);
	}
	else if (board[locX - 1][locY] == 'K') {
		system("clear");
		movePlayer(board, (locX - 1), locY, (keyCount + 1), success, level);
	}
	else if (board[locX - 1][locY] == 'D') {
		if (keyCount >= 1) {
			system("clear");
			movePlayer(board, (locX - 1), locY, (keyCount - 1), success, level);
		} 
		else if (keyCount == 0) {
			system("clear");
			cout << "A key is required to open this door!" << endl;
			movePlayer(board, locX, locY, keyCount, success, level);
			cout << "A key is required to open this door!" << endl;
		}
	}

	else
	system("clear");
	movePlayer(board, (locX - 1), locY, keyCount, success, level);
}

//Void function which moves the user right, checking to see if there are walls, keys, or doors
void moveRight(char board[][20], int locX, int locY, int keyCount, bool &success, int &level) {
	if (board[locX][locY + 1] == 'X') {
		system("clear");
		cout << "Invalid move. Please enter another move." << endl;
		movePlayer(board, locX, locY, keyCount, success, level);
	}
	else if (board[locX][locY + 1] == 'K') {
		system("clear");
		movePlayer(board, locX, (locY + 1), (keyCount + 1), success, level);
	}
	else if (board[locX][locY + 1] == 'D') {
		if (keyCount >= 1) {
			system("clear");
			movePlayer(board, locX, (locY + 1), (keyCount - 1), success, level);
		}
		else if (keyCount == 0) {
			cout << "A key is required to open this door!" << endl;
			movePlayer(board, locX, locY, keyCount, success, level);
		}
	}

	else
	system("clear");
	movePlayer(board, locX, (locY + 1), keyCount, success, level); 
}

//Void function which moves the user down, checking to see if there are walls, keys, or doors
void moveDown(char board[][20], int locX, int locY, int keyCount, bool &success, int &level) {
	if (board[locX + 1][locY] == 'X') {
		system("clear");
		cout << "Invalid move. Please enter another move." << endl;
		movePlayer(board, locX, locY, keyCount, success, level);
	}
	else if (board[locX + 1][locY] == 'K') {
		system("clear");
		movePlayer(board, (locX + 1), locY, (keyCount + 1), success, level);
	}
	else if (board[locX + 1][locY] == 'D') {
		if (keyCount >= 1) {
			system("clear");
			movePlayer(board, (locX + 1), locY, (keyCount - 1), success, level);
		}
		else if (keyCount == 0) {
			cout << "A key is required to open this door!" << endl;
			movePlayer(board, locX, locY, keyCount, success, level);
		}
	}

	else
	system("clear");
	movePlayer(board, (locX + 1), locY, keyCount, success, level);
}

//Void function which moves the user left, checking to see if there are walls, keys, or doors
void moveLeft(char board[][20], int locX, int locY, int keyCount, bool &success, int &level) {
	if (board[locX][locY - 1] == 'X') {
		system("clear");
		cout << "Invalid move. Please enter another move." << endl;
		movePlayer(board, locX, locY, keyCount, success, level);
	}
	else if (board[locX][locY - 1] == 'K') {
		system("clear");
		movePlayer(board, locX, (locY - 1), (keyCount + 1), success, level);
	}
	else if (board[locX][locY - 1] == 'D') {
		if (keyCount >= 1) {
			system("clear");
			movePlayer(board, locX, (locY - 1), (keyCount - 1), success, level);
		}
		else if (keyCount == 0) {
			cout << "A key is required to open this door!" << endl;
			movePlayer(board, locX, locY, keyCount, success, level);
		}
	}
	else if (board[locX][locY - 1] == 'E') {
		success = 1;
		system("clear");
		movePlayer(board, locX, (locY - 1), keyCount, success, level);
	}
		
	else
	system("clear");
	movePlayer(board, locX, (locY - 1), keyCount, success, level);
}

//Void function which displays the level and keycount.
//Takes the user input and sends it to the respective function
void movePlayer(char board[][20], int locX, int locY, int keyCount, bool &success, int &level) {
	int length;
	char move;
	if(success == 1){
		return;
	}
	else{
		if (level == 1) {
			level = 1;
		}
		else if (level == 2) {
			level = 2;
		}
	cout << "Level: " << level << endl;
	cout << "Key count: " << keyCount << endl;
	printMaze(board, locX, locY, keyCount);

		
			cout << "\nWhich direction would you like to move?" << endl;
			cout << "Use u (up), r (right), d (down), l (left), x (exit)" << endl;
			cin >> move;

			switch (move) {
				case 'u':
				case 'U':
					moveUp(board, locX, locY, keyCount, success, level);
					break;
				case 'r':
				case 'R':
					moveRight(board, locX, locY, keyCount, success, level);
					break;
				case 'd':
				case 'D':
					moveDown(board, locX, locY, keyCount, success, level);
					break;
				case 'l':
				case 'L':
						moveLeft(board, locX, locY, keyCount, success, level);
					break;
				case 'x':
				case 'X':
					exit (0);
				default:
					system("clear");
					cout << "Invalid move. Please try again." << endl;
						movePlayer(board, locX, locY, keyCount, success, level);
				}
		}
}
	
int main () {
	bool success_1 = 0;
	bool success_2 = 0;
	int first_level = 1;
	int second_level = 2;	
	location.locX_1 = 19;
	location.locY_1 = 1;
	location.locX_2 = 6;
	location.locY_2 = 9;
	key.keyCount = 0;
	
	//array for level 1
	char level_1[20][20] = {
	{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'},
	{'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},
	{'X',' ','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',' ','X'},
	{'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X'},
	{'X',' ','X','X','X','X',' ','X','X','X','X','X','X',' ','X','X',' ',' ',' ','X'},
	{'X',' ','X','X','X','X',' ','X','X',' ',' ',' ','X',' ','X','X',' ','X','X','X'},
	{'X',' ','X','X','X','X',' ','X','X',' ','X',' ','X',' ',' ','X',' ','X','X','X'},
	{'X',' ','X','X','X','X',' ','X','X',' ','X',' ','X','X',' ','X',' ','X','K','X'},
	{'X',' ','X','X','X','X',' ',' ',' ',' ','X','K','X','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X','X','X','X','X','X','X','X','X','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X','X','X','X',' ','X',' ','D',' ','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','E',' ','X','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X',' ','X',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X',' ','X',' ','X','X',' ','X',' ','X',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X',' ','X',' ','X','X',' ','X',' ',' ',' ','X',' ','X',' ','X'},
	{'X',' ','X','X','X',' ','X',' ','X','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'E',' ','X','X',' ',' ',' ',' ',' ','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'X',' ','X','X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'X',' ','X','X',' ','X','X','X',' ',' ',' ',' ',' ',' ','X','X',' ',' ',' ','X'},
	{'X',' ','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'} };

	//array for level 2
	char level_2[20][20] = {
	{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'},
	{'X','X','E',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},
	{'X','X','X','X','X','X','X','X','X','X','X',' ',' ',' ','X','X','X','X',' ','X'},
	{'X','X','X',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','X',' ','X'},
	{'X','K','X','X','X',' ',' ','X','X','X','X','X','X',' ','X','X',' ',' ',' ','X'},
	{'X',' ',' ',' ','X','X',' ','X','X','X','X','X','X',' ','X','X','X','X',' ','X'},
	{'X',' ','X',' ','X','X',' ','X','X','S','X','X','X',' ',' ','X','K','X',' ','X'},
	{'X','X','X',' ','X','X',' ','X','X',' ','X','X','X','X',' ','X',' ','X',' ','X'},
	{'X','X','X',' ','X','X',' ',' ',' ',' ','X','X','X','X',' ','X',' ','X',' ','X'},
	{'X','X','X',' ','X','X','X','X','X',' ','X','X','X','X',' ','X',' ','X',' ','X'},
	{'X','X','X',' ','X','X','X','X',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X'},
	{'X','X','X',' ',' ',' ','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X'},
	{'X','X','X','X','X',' ','X',' ',' ','X','X','X',' ','X',' ','X',' ','X',' ','X'},
	{'X','X','X','X','X',' ','X',' ','X','X','X','X',' ','X',' ','X',' ','X',' ','X'},
	{'X','X','X','X','X',' ','X',' ','X','X',' ','X',' ',' ',' ','X',' ','X',' ','X'},
	{'X','X','X','X','X',' ','X',' ','X','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'X','X','X','X','X',' ',' ',' ',' ','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'X','X','X','X','X','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X'},
	{'X','X','X','X','X','X','X','X',' ',' ',' ','X','X','X','X','X',' ',' ',' ','X'},
	{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'} };

	//Welcome and instructions
	cout << "\nWelcome to the maze! This is a simple program where you must make your way through a maze." << endl;
	cout << "Your current position will be marked with an @. There are keys spread out around the maze marked by a 'K'." << endl;
	cout << "You must collect a key before moving through a door, marked by a 'D'." << endl;
	cout << "Make your way through the maze till you get to the end, marked by a 'E'." << endl;
	cout << "Good Luck and have fun!" << endl;
	cout << "\nPress enter to contine";
	cin.ignore();	

	system("clear");
		movePlayer(level_1, location.locX_1, location.locY_1, key.keyCount, success_1, first_level);
		system("clear");
		cout << "Congratulations! You may now advance to the next level..." << endl;
		movePlayer(level_2, location.locX_2, location.locY_2, key.keyCount, success_2, second_level);
		cout << "Congratulations! You have beaten the maze!" << endl;
	

	return 0;
}
