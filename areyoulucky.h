#pragma once
#include <iostream>
#include "opponent.h"

using namespace std;


class AreYouLucky : public Opponent
{
    int number;
public:
    AreYouLucky(string, string);
    ~AreYouLucky();
    virtual void combat(Wizard *wizard);
    int generate_number();
};


