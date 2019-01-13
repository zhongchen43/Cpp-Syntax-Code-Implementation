#include <iostream>

using namespace std;

// const-delete
int main()
{
    int a;
    const int &ra = a;
    a = 100;
    cout <<a<< endl;
    const_cast<int&>(ra) = 300;
    cout<<ra<<endl;

    return 0;
}
