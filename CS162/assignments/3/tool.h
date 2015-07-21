//
//  tool.h
//  Assignment3
//
//  Created by Kevin Stine on 5/8/15.
//  Copyright (c) 2015 Kevin Stine. All rights reserved.
//

#ifndef TOOL_H
#define TOOL_H
#include <stdio.h>

class Tool {
protected:
    int strength;
    char type;
public:
    Tool();
    //Tool(const Tool &);
    virtual ~Tool();
    void setStrength(int);
    void setType(int);
    int getType();
    int getStrength();
    virtual bool fight(Tool);
    
    
};

#endif
