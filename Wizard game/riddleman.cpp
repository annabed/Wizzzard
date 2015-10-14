#include <iostream>
#include "riddleman.h"
using namespace std;

RiddleMan::RiddleMan(string n, string f) : Opponent(n,f) {}

RiddleMan::~RiddleMan(){}

virtual void RiddleMan::combat()
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
                int answear;
                cin >> answear;
                if(answear == getline(file,line))
                    wizard.set_item(item);
                else
                    cout << "You've lost this time" << endl;
             }
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk to people" << endl;
}
