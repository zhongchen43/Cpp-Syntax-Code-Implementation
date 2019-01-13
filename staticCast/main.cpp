#include <iostream>

using namespace std;

int main()
{
    // transfer type
    double a; int i;
    a = static_cast<double>(i);
    i = static_cast<int>(a);

    cout << "Hello World!" << endl;
    return 0;
}
