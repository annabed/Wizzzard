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
//#include "person.cpp"
//#include "opponent.cpp"
//#include "riddleman.cpp"
//#include "wizard.cpp"
//#include "areyoulucky.cpp"
//#include "game.cpp"
//#include "multiriddleman.cpp"

int main()
{
    srand( time( NULL ) );
    Game * a = Game::get_instance();
    a->play();
    return 0;
}
