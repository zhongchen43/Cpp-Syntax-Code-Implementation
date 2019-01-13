#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    void xxxx()
    {
        cout<<"xxxx"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }
};

void foo()
{
//    A *p = new A;
//    delete p;
    auto_ptr<A> p(new A);
    p->xxxx();
}

int main()
{
    foo();
    cout << "Hello World!" << endl;
    return 0;
}
