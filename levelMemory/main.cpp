#include <iostream>

using namespace std;

class Stu
{
public:
    Stu()
    {
        cout<<"Stu()"<<endl;
        name = new char[1024];
        age = 18;

    }
    ~Stu()
    {
        cout<<"~Stu()"<<endl;
        delete []name;
    }
private:
    char * name;
    int age;
};

int main()
{
    Stu s;

    cout << "Hello World!" << endl;
    return 0;
}
