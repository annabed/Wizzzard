#pragma once
#include "opponent.h"

class RiddleMan : public Opponent
{
public:
    RiddleMan(string, string);
    ~RiddleMan();
    virtual void combat(Wizard *wizard);
};


