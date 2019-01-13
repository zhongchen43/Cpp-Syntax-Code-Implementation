#include <iostream>

using namespace std;

namespace ONE {
    int x = 14;

}

namespace ANOTHER {
    int x = 4;
}
int main()
{
    cout << ONE::x << endl;
    cout<<ANOTHER::x<<endl;
    return 0;
}
