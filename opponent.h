#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class Opponent : public Person
{
    string opponent_item;
    string file;
public:
    Opponent(string, string);
    ~Opponent();
    string get_opponent_item();
    virtual void combat(Wizard *wizard);
};


