#include <iostream>

using namespace std;

#include "game.h"

int main() {
    srand(time(NULL));
    Game *a = Game::get_instance();
    a->play();
    return 0;
}
