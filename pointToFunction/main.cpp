#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int nu):name_(n),num_(nu){}

    void dis(int idx)
    {
        cout<<"idx: "<<idx<<" Name: "<<name_<<" Number:"<<num_<<endl;
    }
private:
    string name_;
    int num_;
};

int main()
{
//    void (*pf)(int a) = foo; // c
    void (Student::*pdis)(int idx) = &Student::dis; //cpp

    Student s("zhangsan",100);

    // pf(1)
    (s.*pdis)(1);
    (s.*pdis)(2);


    return 0;
}
