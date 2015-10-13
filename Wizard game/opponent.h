class Opponent : public Person
{
    string opponent_item;
public:
    Opponent(string, string);
    ~Opponent();
    string get_opponent_item(void);
//    virtual void combat();
    int roll_dice();
};

Opponent::Opponent(string n, string i) : Person(n)
{
    opponent_item = i;
}

string Opponent::get_opponent_item()
{
    return opponent_item;
}

Opponent::~Opponent(){}

int Opponent::roll_dice()
{
    return (rand() % 6 + 1);
}
