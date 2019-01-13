#include <iostream>
#include <string.h>

using namespace std;

class Stu
{
public:
    Stu()
    {
        cout<<this<<endl;
    }
    ~Stu()
    {
        cout<<this<<endl;
    }
private:
    string name;
    int age;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
