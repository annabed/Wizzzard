#include <fstream>
#include "riddleman.h"

using namespace std;

RiddleMan::RiddleMan(string n, string f) : Opponent(n,f) {}

RiddleMan::~RiddleMan(){}

virtual void RiddleMan::combat(Wizard *wizard)
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
                string item;
                getline(file,item);
                string answear;
                cin >> answear;
                string correct_answear;
                getline(file,corrent_answear)
                if(answear == correct_answear)
                    wizard->set_item(item);
                else
                    cout << "You've lost this time" << endl;
             }
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk to people" << endl;
}
