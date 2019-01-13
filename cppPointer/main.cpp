#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int nu):name(n),num(nu){}

    string name;
    int num;
};

int main()
{
    Student s("zhangsi",100);
    Student *ps = &s;

//    string *psn = &s.name; //此行为，破坏了类

    //下面讲得指针，是指类层面的指针，不是对象层面的
    //要想使用，还要跟具体的对象产生关系

    //这种不太用
    string Student:: *psn = &Student::name;
    cout<<ps->*psn<<endl;


    return 0;
}
