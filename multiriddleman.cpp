#include <fstream>
#include "multiriddleman.h"

using namespace std;

MultiRiddleMan::MultiRiddleMan(string n, string f) : RiddleMan(n, f) { }

MultiRiddleMan::~MultiRiddleMan() { }

virtual void MultiRiddleMan::combat(Wizard *wizard)
{
    ifstream file(file);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line != "===")
                cout << line << endl;
            else {
                string item;
                getline(file, item);
                int answear;
                int correct = 0;
                for (int i = 0; i < 6; i++) {
                    cout << getline(file, line);
                    cin >> answear;
                    string correct_answear;
                    getline(file, correct_answear)
                    if (answear == correct_answear)
                        correct++;
                }
                if (correct == 6) {
                    cout << "Very well, you'll get your item back" << endl;
                    wizard->set_item(item);
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
