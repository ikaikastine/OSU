#ifndef RPSGame_H
#define RPSGame_H
#include <stdio.h>
#include "tool.h"

class RPSGame {
protected:
    Tool *human;
    Tool *computer;
    Tool* getTool();
    Tool* getAI();
    int humanWins;
    int compWins;
    int ties;
    int rockStrength;
    int paperStrength;
    int scissorsStrength;
    void checkFight();
    void chooseStrength();
    
    
public:
    RPSGame();
    int playRPS();
    void operator=(const RPSGame &other);
    RPSGame(const RPSGame &other);
    ~RPSGame();

    
};

#endif
