#pragma once
#include "wizard.h"
#include "opponent.h"
#include "areyoulucky.h"
#include "riddleman.h"
#include "multiriddleman.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game //Singleton
{
    Game();
    ~Game();
    static Game * instance;
public:
    static Game * get_instance();
    static void delete_instance();
    void play();
    static int roll_dice();

};

Game::Game() {}

Game::~Game(){}

Game* Game::instance;

Game *Game::get_instance() {
    if (Game::instance == 0) {
        Game::instance = new Game;
    }
    return Game::instance;
}

void Game::delete_instance() {
    delete Game::instance;
}

int Game::roll_dice()
{
    return (rand() % 6 + 1);
}

void Game::play()
{
    string text[]={"You've already been there.", "Oups, you are still too drunk to talk to people", "Roll your dice to decide where to go",
    "Unfortunately, you've lost the game. You have not collected all the items.", "Maybe you will manage next time", "You've collected all you items:",
    "Good, at least you remember your name,", "So let's begin our journey."};
    ifstream file("welcome.txt");
    string line;
    if (file.is_open())
    {
        while (getline (file,line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
        cout << text[1] << endl;
    string n;
    cin >> n;
    Wizard wizard(n);
    cout << text[6] << wizard.get_person_name() << text[7] << endl;
    int dice;
    int already_visited[6] = {0};
    int helper = 0;
    Opponent * tab[5];
    while (helper < 6)
    {
        //the game proceeds until the wizard collects all his 6 items
        cout << text[2] << endl;
        dice = Game::roll_dice();
        switch(dice)
        {
        case 1: // AreYouLucky no 1
            if(already_visited[0] == 0)
            {
                tab[0] = new AreYouLucky("Frog", "areyoulucky.txt");
                tab[0]->combat(&wizard);
                already_visited[0] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        case 2: // AreYouLucky no 2
            if(already_visited[1] == 0)
            {
                tab[1] = new AreYouLucky("Old man", "areyoulucky2.txt");
                tab[1]->combat(&wizard);
                already_visited[1] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        case 3: //MysteryGuy
            if(already_visited[2] == 0)
            {
                tab[2] = new RiddleMan("Mystery Guy", "mystery_guy.txt");
                tab[2]->combat(&wizard);
                already_visited[2] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        case 4: //Dwarf
            if(already_visited[3] == 0)
            {
                tab[3] = new RiddleMan("Dwarf", "dwarf.txt");
                tab[3]->combat(&wizard);
                already_visited[3] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        case 5: //Teacher
            if(already_visited[4] == 0)
            {
                tab[4] = new MultiRiddleMan("Teacher", "teacher.txt");
                tab[4]->combat(&wizard);
                already_visited[4] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        case 6: //Dog
            if(already_visited[5] == 0)
            {
                tab[5] = new Opponent("Dog", "dog.txt");
                tab[5]->combat(&wizard);
                already_visited[5] = 1;
                helper++;
            }
            else
                cout << text[0] << endl;
            break;
        default:
            cout << text[1] << endl;
            break;
        }
    };
    if(wizard.get_item(0) == "0" || wizard.get_item(1) == "0" || wizard.get_item(2) == "0" || wizard.get_item(3) == "0" || wizard.get_item(4) == "0" || wizard.get_item(5) == "0")
    {
        cout << text[3] << endl << text[4] << endl;
    }
    else
    {
        cout << text[5] << endl;
        for(int i=0; i<5; i++)
        {
            cout << wizard.get_item(i) << endl;
        }
    }
}


