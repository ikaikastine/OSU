/*********************************************************************
** Program Filename: connect_four.cpp
** Author: Kevin Stine
** Date: 4/15/15
** Description: Contains functions for connect four game
** Input: rows, cols, pieces
** Output: game board, winner
*********************************************************************/


#include <iostream>
#include <stdio.h>
#include "connect_four.h"

using namespace std;


/*********************************************************************
** Function: is_valid_arguments
** Description: Checks to make sure the command line arguments are valid
** Parameters: char *info[]
** Pre-Conditions: Passes in the command line arguments 
** Post-Conditions: Checks to make sure the arguments are valid
*********************************************************************/

bool is_valid_arguments(char *info[]) {
	int valid;
	string r, c, p;
	r = info[1];
	c = info[3];
	p = info[5];

	if (r != "-r" || c != "-c" || p != "-p") {
		cout << "Invalid Input." << endl;
		exit(0);
	}
	while (valid == 0) {
		if (atoi(info[2]) <= 0) {
			cout << "Please enter a positive row number." << endl;
			cin >> info[2];
		}
		else if (atoi(info[4]) <= 0) {
			cout << "Please enter a positive column number." << endl;
			cin >> info[4];
		}
		else if (atoi(info[6]) <= 0) {
			cout << "Please enter a positive piece number." << endl;
			cin >> info[6];
		}
		else {
			valid = 1;
		}
	}
	return true;
}

/*********************************************************************
** Function: set_game_info
** Description: Sets the values of the struct to the command line arguments 
** Parameters: game *data, and command line arguement array
** Pre-Conditions: The command line arguments have to be passed in 
** Post-Conditions: rows, cols, and pieces are set 
*********************************************************************/

void set_game_info(game *data, char *info[]) {
	data->r = atoi(info[2]);
	data->c = atoi(info[4]);
	data->p = atoi(info[6]);
}

/*********************************************************************
** Function: create_table 
** Description: Creates the game board on the heap
** Parameters: row, col
** Pre-Conditions: int row and int col 
** Post-Conditions: The table is created 
*********************************************************************/

char** create_table(int row, int col) {
	char **table;
	table = new char*[row];
	for (int i = 0; i < row; i++) {
		table[i] = new char[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			table[i][j] = ' ';
			cout << table[i][j] << "| ";
		}
		cout << endl;
	}
	return table;
}

/*********************************************************************
** Function: printBoard
** Description: Prints the game board
** Parameters: struct of game 
** Pre-Conditions: game 
** Post-Conditions: the board has been printed 
*********************************************************************/

void printBoard(game* game) {
	for (int i = 0; i < game->r; i++) {
		for (int j = 0; j < game->c; j++) {
			cout << game->board[i][j] << "| ";
		}
		cout << endl;
	}
}

/*********************************************************************
** Function: play_game
** Description: Plays the game
** Parameters: struct of game
** Pre-Conditions: game
** Post-Conditions: The game is played 
*********************************************************************/

void play_game(game* game) {
	bool color = false;
	//int count = 1;
	int valid = 0;
	int player = 1;
	int turnCount = 0;
	//bool gameOver = false;

	while (!color) {
		cout << "Player 1, please choose red or yellow (r or y) ";
		cin >> game->p1;

		if (game->p1 == 'r') {
			game->p2 = 'y';
		}
		else {
			game->p2 = 'r';
		}
		color = true;
	}

	while (check_winner(game) == false) {
		int c;
		//int r = game->r;
		int x = 1;
		char piece = game->p1;
		if (player == 2) {
			piece = game->p2;
		}
		cout << "Player " << player << " what column do you want to place your piece? ";
		cin >> c;
		
		if (c < 1 || c > game->c) {
			//system("clear");
			cout << "Please enter a valid column" << endl;
			turnCount--;
			valid = 0;
		}
		else {
			for (int i = (2*game->r - 2); i >=0; i-= 2) {
				if (game->board[game->r - x][c-1] == ' ') {
					game->board[game->r - x][c-1] = piece;
					i = -1;
				}
				else if (game->board[game->r - x][c-1] != ' ') {
					x++;
				}
				else {
					cout << "That column is full. Please enter another." << endl;
					valid = 0;
				}
			}
		}
		if (player == 1) {
			player++;
		}
		else {
			player--;
		}
		system("clear");
		printBoard(game);
		turnCount++;
		//cout << "Turn Count = " << turnCount << endl;
		if (turnCount == (game->r) * (game->c)) {
			cout << "Tie Game. Game over." << endl;
			break;
		}
	}
}

/*********************************************************************
** Function: check_winner
** Description: algorithm that checks to see a winner of the game
** Parameters: struct of game 
** Pre-Conditions: game
** Post-Conditions: Player 1 or Player 2 wins 
*********************************************************************/

bool check_winner(game* game) {
	int countP1;
	int countP2;

	//Check Vertical
	for (int i = 0; i < (game->r - game->p) + 1; i++) {
		for (int j = 0; j < game->c; j++) {
			countP1 = 0;
			countP2 = 0;
			for (int k = 0; k < game->p; k++) {
				if (game->board[i+k][j] == game->p1) {
					countP1++;
				}
				if (game->board[i+k][j] == game->p2) {
					countP2++;
				}
			}
			if (countP1 == game->p) {
				cout << "Player 1 wins." << endl;
				return true;
			}
			if (countP2 == game->p) {
				cout << "Player 2 wins." << endl;
				return true;
			}
		}
	}

	//Check Horizontal
	for (int i = 0; i < (game->r) ; i++) {
		for (int j = 0; j < (game->c - game->p) + 1; j++) {
			countP1 = 0;
			countP2 = 0;
			for (int k = 0; k < game->p; k++) {
				if (game->board[i][j+k] == game->p1) {
					countP1++;
				}
				if (game->board[i][j+k] == game->p2) {
					countP2++;
				}
			}
			if (countP1 == game->p) {
				cout << "Player 1 wins." << endl;
				return true;
			}
			if (countP2 == game->p) {
				cout << "Player 2 wins." << endl;
				return true;
			}
		}
	}

	//Check Diagonal Up Left
	for (int i = 0; i < (game->r - game->p) + 1; i++) {
		for (int j = 0; j < (game->c - game->p) + 1; j++) {
			countP1 = 0;
			countP2 = 0;
			for (int k = 0; k < game->p; k++) {
				if (game->board[i+k][j+k] == game->p1) {
					countP1 = countP1+1;
				}
				if (game->board[i+k][j+k] == game->p2) {
					countP2 = countP2+1;
				}
			}
			if (countP1 == game->p) {
				cout << "Player 1 wins." << endl;
				return true;
			}
			if (countP2 == game->p) {
				cout << "Player 2 wins." << endl;
				return true;
			}
		}
	}
	
	//Check Diagonal Up Right
	for (int i = (game->p - 1); i < game->r; i++) {
		for (int j = 0; j < (game->c - game->p) + 1; j++) {
			countP1 = 0;
			countP2 = 0;
			for (int k = 0; k < game->p; k++) {
				if (game->board[i-k][j+k] == game->p1) {
					countP1 = countP1+1;
				}
				if (game->board[i-k][j+k] == game->p2) {
					countP2 = countP2+1;
				}
			}
			if (countP1 == game->p) {
				cout << "Player 1 wins." << endl;
				return true;
			}
			if (countP2 == game->p) {
				cout << "Player 2 wins." << endl;
				return true;
			}
		}
	}
	return false;
}	

/*********************************************************************
** Function: delete_table 
** Description: delets the board from the heap
** Parameters: struct of game
** Pre-Conditions: game
** Post-Conditions: board is deleted 
*********************************************************************/

void delete_table(game *game) {
	for (int i = 0; i < game->r; i++) {
		delete [](game->board)[i];
	}
	delete [](game->board);

}