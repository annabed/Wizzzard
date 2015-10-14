#include <iostream>
#include "multiriddleman.h"
using namespace std;

MultiRiddleMan::MultiRiddleMan(string n, string f) : RiddleMan(n,f) {}

MultiRiddleMan::~MultiRiddleMan(){}

virtual void MultiRiddleMan::combat()
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
                int correct =0;
                for(int i=0, i<6, i++)
                {
                    cout << getline(file,line);
                    cin >> answear;
                    if(answear == getline(file,line))
                        correct++;
                }
                if(correct == 6)
                {
                    cout << "Very well, you'll get your item back" << endl;
                    wizard.set_item(item);
                }
                else
                    cout << "You've lost this time" << endl;
             }
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk to people" << endl;
}
