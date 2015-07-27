#ifndef ROCK_H
#define ROCK_H
#include <stdio.h>
#include "tool.h"

class Rock : public Tool {
protected:
    
public:
    Rock();
    Rock(int);
    Rock(const Rock &);
    void operator=(const Rock &other);
    ~Rock();
    bool fight(Tool);
};

#endif
