#include <iostream>

using namespace std;

//子类构造过程中，会调用父类构造器
class C
{
public:
    C(int k)
    {
        cout<<"C()"<<endl;
        c = k;
    }
    int c;
};

class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a = i;
    }
    int a;
};

class B:public A
{
public:
    B(int i, int j,int k)
        :A(i),c(k)
    {
        cout<<"B()"<<endl;
        b = j;
    }
    int b;
    C c;
};

int main()
{
    B b(3,5,8);
    cout<<b.a<<b.b<<b.c.c<< endl;
    return 0;
}
