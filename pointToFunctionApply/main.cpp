#include <iostream>

using namespace std;


//提供统一的接口
struct Point
{
    int add(int x, int y)
    {
        return x+y;
    }

    int minus(int x, int y)
    {
        return x-y;
    }
    int mul(int x, int y)
    {
        return x*y;
    }

    int div(int x, int y)
    {
        return x/y;
    }
};

int oper(Point & p, int (Point::*pf)(int x,int y), int x, int y)
{
    return (p.*pf)(x,y);
}

typedef int (Point::*PF)(int x, int y);

int main()
{
    Point p;
    PF pf = &Point::add;
    pf = &Point::mul;

    cout << oper(p,pf,1,2) << endl;
    return 0;
}
