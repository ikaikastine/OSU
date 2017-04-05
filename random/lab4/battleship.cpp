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
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	int players, ship, game, counter, x, direction;
	int p1_ship, p2_ship, p1_direction, p2_direction;
	string p1_rows, p2_rows, p1_cols, p2_cols;
	string p1_placement, p2_placement, p1_hit, p2_hit;
	string rows, cols;
	string placement;
	string hit;
	int ship_count = 5;
	int p2_ship_count = 5;

	srand(time(NULL));

	x = rand() %10;

	cout << "Welcome to Battleship!\n" << endl;
	
	cout << "How many players? (1 or 2)\n" << endl;
	cin >> players;
	if (players == 1) {
		cout << "Player 1, select your ship location!" << endl;

		while (ship_count >= 1) {		
		
			cout << "\nChoose a ship" << endl;
			cout << "Select 1 for Carrier, 2 for Battleship, 3 for Cruiser, 4 for Submarine, and 5 for Destroyer\n" << endl;
			cin >> ship;
		
			cout << "Row (A-J) ";
			cin >> rows;	

			cout << "Column (1-10) ";
			cin >> cols;

			cout << "\nDirection (1 for Down or 2 for Right)\n" << endl;
                	cin >> direction;
	
			ship_count = ship_count - 1;
			counter--;
		}
	}

	if (players == 2) {


                while (p2_ship_count >= 1) {
			
			cout << "Player 1, select your ship location!" << endl;

                        cout << "\nChoose a ship" << endl;
                        cout << "Select 1 for Carrier, 2 for Battleship, 3 for Cruiser, 4 for Submarine, and 5 for Destroyer\n" << endl;
                        cin >> p1_ship;

                        cout << "Row (A-J) ";
                        cin >> p1_rows;

                        cout << "Column (1-10) ";
                        cin >> p1_cols;

                        cout << "\nDirection (1 for Down or 2 for Right)\n" << endl;
                        cin >> p1_direction;

			cout << "Player 2, select your ship location!" << endl;

			cout << "\nChoose a ship" << endl;
                        cout << "Select 1 for Carrier, 2 for Battleship, 3 for Cruiser, 4 for Submarine, and 5 for Destroyer\n" << endl;
                        cin >> p2_ship;

                        cout << "Row (A-J) ";
                        cin >> p2_rows;

                        cout << "Column (1-10) ";
                        cin >> p2_cols;

                        cout << "\nDirection (1 for Down or 2 for Right)\n" << endl;
                        cin >> p2_direction;

                        p2_ship_count = p2_ship_count - 1;
                        counter--;
                }
	}

/*		
		cout << "\nPlayer 1, which ship would you like to place on the board?" << endl;
                cout << "Select 1 for Carrier, 2 for Battleship, 3 for Cruiser, 4 for Submarine, and 5 for Destroyer\n" << endl;
                cin >> ship;

                if (ship == 1) {

                        cout << "\nWhich direction do you want your ship to point? (Horizontal or Vertical)\n" << endl;
                        cin >> direction;

                        cout << "\nWhere do you want to place your ships? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
                        cin >> placement;

                }

                cout << "\nWhere do you want to hit? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
                cin >> hit;

		
		cout << "\nPlayer 2, which ship would you like to place on the board?" << endl;
                cout << "Select 1 for Carrier, 2 for Battleship, 3 for Cruiser, 4 for Submarine, and 5 for Destroyer\n" << endl;
                cin >> ship;

                if (ship == 1) {

                        cout << "\nWhich direction do you want your ship to point? (Horizontal or Vertical)\n" << endl;
                        cin >> direction;

                        cout << "\nWhere do you want to place your ships? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
                        cin >> placement;

                }

                cout << "\nWhere do you want to hit? (A1-A5,B1-B5,C1-C5,D1-D5)\n" << endl;
                cin >> hit;
        }	
*/
	else return 0;
}  
