/******************************************************
 ** Program: RPSGame.cpp
 ** Author: Kevin Stine
 ** Date: 05/09/2015
 ** Description: Plays rock/paper/scissors game
 ** Input: None
 ** Output: Game is played
 ******************************************************/
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "RPSGame.h"
#include "rock.h"
#include "paper.h"
#include "scissors.h"

using namespace std;

//Default Constructor
RPSGame::RPSGame() {
    humanWins = 0;
    compWins = 0;
    ties = 0;
    rockStrength = 1;
    scissorsStrength = 1;
    paperStrength = 1;
}

/*********************************************************************
 ** Function: chooseStrength()
 ** Description: Allows the user to input custom strengths
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Strengths are set
 *********************************************************************/
void RPSGame::chooseStrength() {
    cout << "Please choose a strength for rock: ";
    cin >> rockStrength;
    cout << endl;
    cout << "Please choose a strength for paper: ";
    cin >> paperStrength;
    cout << endl;
    cout << "Please choose a strength for scissors: ";
    cin >>scissorsStrength;
    cout << endl;
}

/*********************************************************************
 ** Function: getTool()
 ** Description: Prompts the user to pick a tool
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Tool is picked
 *********************************************************************/
Tool* RPSGame::getTool() {
    char choice;
    do {
        cout << "Choose your tool. (r-rock, p-paper, s-scissors, e-exit)" << endl;
        cin >> choice;
    
        if (choice == 'r') {
            return new Rock(rockStrength);
        }
        else if (choice == 'p') {
            return new Paper(paperStrength);
        }
        else if (choice == 's') {
            return new Scissors(scissorsStrength);
        }
        else if (choice == 'e') {
            return 0;
        }
        else {
                cout << "Invalid input. Please try again." << endl;
        }
    }
    while(true);
    return 0;
}

/*********************************************************************
 ** Function: getAI()
 ** Description: The AI chooses its own tool
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: AI tool is picked
 *********************************************************************/
Tool* RPSGame::getAI() {
    int x = rand() % 3 + 1;
    if (x == 1) {
        cout << "Computer chooses Rock!" << endl;
        return new Rock(rockStrength);
    }
    else if (x == 2) {
        cout << "Computer Chooses Paper!" << endl;
        return new Paper(paperStrength);
    }
    else if (x == 3) {
        cout << "Computer chooses Scissors!" << endl;
        return new Scissors(scissorsStrength);
    }
    return 0;
}

/*********************************************************************
 ** Function: checkFight()
 ** Description: Compares the human and AI to see who wins
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Winner is chosen
 *********************************************************************/
void RPSGame::checkFight() {
    if(human->fight(*computer)) {
        cout << "You Win!" << endl;
        humanWins++;
    }
    else if (computer->fight(*human)) {
        cout << "Computer wins!" << endl;
        compWins++;
    }
    else {
        cout << "Tie game." << endl;
        ties++;
    }
    cout << "Human wins: " << humanWins << endl;
    cout << "Computer wins: " << compWins << endl;
    cout << "Ties: " << ties << endl;
}

/*********************************************************************
 ** Function: playRPS()
 ** Description: Plays the rock, paper, scissors game
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Game is played
 *********************************************************************/
int RPSGame::playRPS() {
    int strengthChoice;
    cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different strengths for the tools? (1-yes, 2-no)" << endl;
    cin >> strengthChoice;
    
    do {
        if (strengthChoice == 1) {
            chooseStrength();
        }
        human = getTool();
        if (human == NULL) {
            return 0;
        }
        computer = getAI();
        checkFight();
        
        delete human;
        delete computer;
    }
    
    while (1);
}

//Assignment Overload
void RPSGame::operator=(const RPSGame &other) {
    humanWins = other.humanWins;
    compWins = other.compWins;
    ties = other.ties;
    
    if (other.human != NULL) {
        delete other.human;
    }
    if (other.computer != NULL) {
        delete other.computer;
    }
}

//Copy Constructor
RPSGame::RPSGame(const RPSGame &other) {
    if(other.human == NULL) {
        human = NULL;
    }
    else if (other.human->getType() == 'r') {
        human = new Rock;
        human->setStrength(other.human->getStrength());
    }
    else if (other.human->getType() == 's') {
        human = new Scissors;
        human->setStrength(other.human->getStrength());
    }
    else if (other.human->getType() == 'p') {
        human = new Paper;
        human->setStrength(other.human->getStrength());
    }
}

//Destructor
RPSGame::~RPSGame() {
    if (human != NULL) {
        delete human;
    }
    if (computer != NULL) {
        delete computer;
    }
}