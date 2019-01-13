#include <iostream>

using namespace std;

class Human
{
public:
    void eat(string food)
    {
        cout<<"eat "<<food<<endl;
    }

};

class Teacher: public Human
{

public:
    void teach(string course)
    {
        cout<<"teacher"<<" teaching "<<course<<endl;

    }

};

class Student:public Human
{
public:

    void study(string course)
    {
        cout<<"student"<<" study "<<course<<endl;

    }
};

int main()
{
    Teacher t;
    t.teach("c++");
    t.eat("soup");

    Student s;
    s.study("c++");
    s.eat("noodle");
    cout << "Hello World!" << endl;
    return 0;
}
