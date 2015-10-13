#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "person.h"
#include "opponent.h"
#include "riddleman.h"
#include "wizard.h"
#include "areyoulucky.h"
#include "game.h"

int main()
{
    srand( time( NULL ) );
    Game game;

    Opponent op("Zdzis", "piwo");
    cout << op.get_person_name() << "\n" << op.get_opponent_item() << endl;
    return 0;
}
