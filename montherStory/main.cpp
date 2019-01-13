#include <iostream>
#include <string.h>

using namespace std;
class IReader
{
public:
    virtual string getContents() = 0;
};

class Book:public IReader
{
public:
    string getContents()
    {
        return "Tell a story";
    }
};

class Newspaper:public IReader
{
public:
    string getContents()
    {
        return "Trump wants to build the Great Wall";
    }
};

class Magzine:public IReader
{
public:
    string getContents()
    {
        return "Cpp is powerful for deep learning";
    }
};
class Mother
{
public:
    void tellStory(IReader * pi)
    {
        cout<<pi->getContents()<<endl;
    }

};

int main()
{
    Mother m;
    Book b;
    Magzine ma;
    m.tellStory(&b);
    m.tellStory(&ma);

    return 0;
}
