class MultiRiddleMan : public RiddleMan
{
public:
    MultiRiddleMan(string, string);
    ~MultiRiddleMan;
    virtual void combat();
};

MultiRiddleMan::MultiRiddleMan(string n, string f) : RiddleMan(n,f) {}

MultiRiddleMan::~MultiRiddleMan(){}


