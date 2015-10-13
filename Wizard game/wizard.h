class Wizard : public Person
{
    int patience;
    string item[5];
public:
    void set_item(int, string);
    string get_item(int);
    void set_patience(void);
    void decrement_patience(void);
    int get_patience(void);
    Wizard(string);
    ~Wizard();
};

Wizard::Wizard(string n):Person(n)
{
    patience = 10;
    for(int i=0; i<5; i++)
    {
        item[i] = "0";
    }
}

Wizard::~Wizard(){}

void Wizard::set_item(int n, string s)
{
    item[n] = s;
}

string Wizard::get_item(int n)
{
    return item[n];
}

void Wizard::set_patience(void)
{
    patience++;
    cout << "You've got more patience" << endl;
}

void Wizard::decrement_patience(void)
{
    patience--;
}

int Wizard::get_patience(void)
{
    return patience;
}
