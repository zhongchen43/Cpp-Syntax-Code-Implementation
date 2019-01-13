#include <iostream>

using namespace std;

// 1. default arguments from right to left;
// 2. actual argu. + default argu >= formal arguments;
// 3. when define and implement are in the different positions default should be in define.

void foo (int a, int b, int c = 3)
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main()
{
    foo(2,4);


    return 0;
}
