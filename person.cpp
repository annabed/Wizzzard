#include "person.h"
using namespace std;

Person::Person(string n)
{
    name = n;
}

Person::~Person(){}

string Person::get_person_name()
{
    return name;
}
