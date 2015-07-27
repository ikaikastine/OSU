/*********************************************************************
** Program Filename: connect_four.h
** Author: Kevin Stine
** Date: 4/15/15
** Description: The header file from connect four
** Input: 
** Output: game board, winner
*********************************************************************/

#ifndef CONNECT_FOUR_H
#define CONNECT_FOUR_H
#include <string>
#include <cmath>
#include <iostream>
#include <cstdlib>

struct game {
	char **board;
	int r, c, p;
	char p1;
	char p2;
};


bool is_valid_arguments(char *info[]);

void set_game_info(game *, char *info[]);

char** create_table(int, int);

void play_game(game *);

bool check_winner(game *);

void delete_table(game *);

int checkHorizontal(game *);


#endif
