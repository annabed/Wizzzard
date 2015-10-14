#include <iostream>
#include "wizard.h"
using namespace std;

Wizard::Wizard(string n):Person(n)
{
    for(int i=0; i<5; i++)
    {
        item[i] = "0";
    }
}

Wizard::~Wizard(){}

void Wizard::set_item(string s)
{
    static int nextfree = 0;
	item[nextfree] = s;
	nextfree++;
}

string Wizard::get_item(int n)
{
    return item[n];
}

