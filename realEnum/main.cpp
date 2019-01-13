#include <iostream>

using namespace std;

enum Season
{
    Spring, Summer, Fall, Winter
};

int main()
{
    Season s = Summer;
    int a; int b = 1;
    int c = 100;
    (a = b) = c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;

    (a>b? a:b) = 200;

    cout << "Hello World!" << endl;
    return 0;
}
