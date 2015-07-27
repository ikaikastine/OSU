#ifndef PAPER_H
#define PAPER_H
#include <stdio.h>
#include "tool.h"

class Paper : public Tool {
protected:
    
public:
    Paper();
    Paper(int);
    Paper(const Paper &);
    void operator=(const Paper &other);
    ~Paper();
    bool fight(Tool);
};
#endif
