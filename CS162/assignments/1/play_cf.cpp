/*********************************************************************
** Program Filename: play_cf.cpp
** Author: Kevin Stine
** Date: 4/15/15
** Description: Plays connect four
** Input: rows, cols, pieces
** Output: game board, winner
*********************************************************************/

#include <iostream>
#include "connect_four.h"

using namespace std;

int main(int argc, char *argv[]) {
	int response;
	game connect;
	if (argc != 7) {
		cout << "Invalid number of arguments" << endl;
		return 0;
	}
	system ("clear");
	do {	
		is_valid_arguments(argv);
		
		set_game_info(&connect, argv);
		
		connect.board = create_table(connect.r, connect.c);

		play_game(&connect);
		cout << "Would you like to play again? (1 for yes, 0 for no)" << endl;
		cin >> response;
	}
	while (response != 0);
	delete_table(&connect);

	return 0;
}