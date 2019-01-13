#include <iostream>

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

class SmartPtr
{
public:
    SmartPtr(A * pa)
    {
        pa_ = pa;
    }
//    A & getAref()
//    {
//        return *pa_;
//    }
//    A * getP()
//    {
//        return  pa_;
//    }
    //重载
    A & operator *()
    {
        return *pa_;
    }
    A * operator->()
    {
        return  pa_;
    }
    ~SmartPtr()
    {
        delete pa_;
    }
private:
    A * pa_;
};


void foo()
{
//    auto_ptr<A> p(new A);
//    p->xxxx();
    SmartPtr sp(new A);
//    sp.getAref().xxxx(); //operator .
//    sp.getP()->xxxx();   //operator ->

//    重载
    (*sp).xxxx();
    sp->xxxx();
}

int main()
{
    SmartPtr sp(new A);
    cout << "Hello World!" << endl;
    return 0;
}
