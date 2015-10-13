class Game
{
public:
    void play();
    Game();
    ~Game();
};

Game::Game()
{
    play();
}

Game::~Game(){}

void Game::play()
{
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
        cout << "Oups, you are still too drunk to talk to people" << endl;
    string n;
    cin >> n;
    Wizard wizard(n);
    cout << wizard.get_person_name() << endl;
}


