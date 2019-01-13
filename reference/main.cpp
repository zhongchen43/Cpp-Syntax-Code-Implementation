#include <iostream>

using namespace std;

// Use "reference" instead of pointer if we can


void mySwap(int *pa, int*pb)
{
    int t = *pa;
    *pa = *pb;
    *pa = t;
}

void mySwap(int &ra, int &rb)
{
    int t = ra;
    ra = rb;
    rb = t;

}
int main()
{
# if 0
    // reference, get position, 按位与
    int a = 100;
    int & ra = a;  // = &a //a&b
#endif

    int a = 3; int b = 5;
    mySwap(a,b);

    cout << "a = "<<a<<"\n"<< endl;
    cout << "b = "<<b<<"\n"<< endl;
    return 0;
}
