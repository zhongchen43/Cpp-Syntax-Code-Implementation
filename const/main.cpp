#include <iostream>

using namespace std;


// const
class A
{
public:
    A(int x, int y):x_(x),y_(x){}
private:
    int x_;
    int y_;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
