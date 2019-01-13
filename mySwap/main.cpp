#include <iostream>

using namespace std;

void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void mySwap(int &ra, int &rb)
{
    int t = ra;
    ra = rb;
    rb = t;
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
