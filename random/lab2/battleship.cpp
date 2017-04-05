/**********
 * Program Filename: Battleship.cpp
 * Author: Kevin Stine
 * Date: 4/10/14
 * Description: A beginning to the battleship program
 * Input: Players, placement, ships, direction, and attack location
 * Output: Prompts for the user to ask for information regarding the game
 **********/ 


#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int players;
	string ship;
	string direction;
	string placement;
	string hit;

	cout << "Welcome to Battleship!\n" << endl;
	
	cout << "How many players? (1 or 2)\n" << endl;
	cin >> players;
	
	cout << "\nWhich ship would you like to place on the board?" << endl;
	cout << "Select from Carrier, Battleship, Cruiser, Submarine, and Destroyer\n" << endl;
	cin >> ship;

	cout << "\nWhich direction do you want your ship to point? (Horizontal or Vertical)\n" << endl;
	cin >> direction;
	
	cout << "\nWhere do you want to place your ships? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
	cin >> placement;
	
	cout << "\nWhere do you want to hit? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
	cin >> hit;
	
	return 0;
}  
