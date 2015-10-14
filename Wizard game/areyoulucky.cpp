#include <iostream>
#include "areyoulucky.h"
#include <ctime>
using namespace std;

AreYouLucky::AreYouLucky(string n, string f) : Opponent(n, f)
{
    number = generate_number();
}

AreYouLucky::~AreYouLucky(){}

void AreYouLucky::combat()
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
                int guess;
                cin >> guess;
                if(guess < 0 || guess > 6)
                    cout << "Invalid number" << endl;
                else
                {
                    if(guess == number)
                        wizard.set_item(item);
                    else
                        cout << "Try again" << endl;
                }
            }
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk to people" << endl;
}

int AreYouLucky::generate_number()
{
    return (rand() % 6 + 1);
}
