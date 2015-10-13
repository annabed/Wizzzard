class AreYouLucky : public Opponent
{
    int patience;
public:
    AreYouLucky(string, string);
    ~AreYouLucky();
//    virtual void combat();
    int get_patience(void);
    int generate_patience(void);
};

AreYouLucky::AreYouLucky(string n, string i) : Opponent(n, i)
{
    patience = generate_patience();
}

AreYouLucky::~AreYouLucky(){}

//void combat()
//{
// //to do
//}

int AreYouLucky::get_patience()
{
    return patience;
}

int AreYouLucky::generate_patience()
{
    return (rand() % 12 + 1);
}
