class Person
{
    string name;
    public:
        Person(string);
        ~Person();
        string get_person_name(void);
};

Person::Person(string n)
{
    name = n;
}

Person::~Person(){}

string Person::get_person_name()
{
    return name;
}
