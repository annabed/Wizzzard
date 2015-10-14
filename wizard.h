#pragma once
#include <iostream>
#include <string>

#include "person.h"

using namespace std;

class Wizard : public Person
{
    string item[6];
public:
    void set_item(string);
    string get_item(int);
    Wizard(string);
    ~Wizard();
};


