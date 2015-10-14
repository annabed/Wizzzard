class AreYouLucky : public Opponent
{
    int number;
public:
    AreYouLucky(string, string);
    ~AreYouLucky();
    virtual void combat();
    int generate_number();
};


