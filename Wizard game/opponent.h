class Opponent : public Person
{
    string opponent_item;
    string file;
public:
    Opponent(string, string);
    ~Opponent();
    string get_opponent_item(void);
    virtual void combat();
};


