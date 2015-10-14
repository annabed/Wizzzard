#include <iostream>
#include "opponent.h"
using namespace std;

Opponent::Opponent(string n, string f) : Person(n)
{
    file = f;
}

string Opponent::get_opponent_item()
{
    return opponent_item;
}

Opponent::~Opponent(){}

void Opponent::combat()
{
    ifstream file(file);
    string line;
    if (file.is_open())
    {
        while (getline (file,line))
        {
            if(line != "===")
                cout << line << endl;
            else
            {
                string item = getline(file,line);
                wizard.set_item(item);
            }
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk to people" << endl;
}
