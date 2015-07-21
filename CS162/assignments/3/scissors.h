#ifndef SCISSORS_H
#define SCISSORS_H
#include <stdio.h>
#include "tool.h"

class Scissors : public Tool {
protected:
    
public:
    Scissors();
    Scissors(int);
    Scissors(const Scissors &);
    void operator=(const Scissors &other);
    ~Scissors();
    bool fight(Tool);
};

#endif
