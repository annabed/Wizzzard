#pragma once
#include <string>
#include "riddleman.h"

using namespace std;

class MultiRiddleMan : public RiddleMan
{
public:
    MultiRiddleMan(string, string);
    ~MultiRiddleMan();
    virtual void combat(Wizard *wizard);
};

MultiRiddleMan::MultiRiddleMan(string n, string f) : RiddleMan(n,f) {}

MultiRiddleMan::~MultiRiddleMan(){}


