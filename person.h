#pragma once
#include <string>
using namespace std;

class Person
{
    string name;
public:
    Person(string);
    ~Person();
    string get_person_name();
};
