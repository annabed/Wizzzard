class Wizard : public Person
{
    string item[6];
public:
    void set_item(int, string);
    string get_item(int);
    Wizard(string);
    ~Wizard();
};


