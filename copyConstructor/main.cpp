#include <iostream>
#include <string.h>

using namespace std;

class A
{
public:
    A(int d, char *p):data(d)
    {
        pd = new char[strlen(p)+1];
        strcpy(pd,p);
    }

    ~A()
    {
        delete []pd;
    }

    A(const A & another)
    {
        pd = new char[strlen(another.pd)+1];
        strcpy(pd, another.pd);
    }

    void dis()
    {
        cout<<data<<endl;
        cout<<pd<<endl;
    }
private:
    int data;
    char * pd;
};

int main()
{
//    A a(20);
//    a.dis();
//    A b(a);
//    b.dis();

    A a(20,"china");
    a.dis();
    A b(a);
    b.dis();

    return 0;
}
