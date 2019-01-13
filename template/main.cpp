#include <iostream>

using namespace std;

#if 0
void Swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

void Swap(double &a, double &b)
{
    double t = a;
    a = b;
    b = t;
}
# endif
template <typename T>
void Swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    float a = 4;
    float b = 8;
    Swap(a,b);
    cout << "a:"<<a << endl;
    cout << "b:"<<b << endl;
    return 0;
}
