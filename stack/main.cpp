#include <iostream>
#include <string.h>

using namespace std;

struct Stack
{
    void init()
    {
        top = 0;
        memset(space,0,1024);
    }
    bool isFull()
    {
        return top == 1024;
    }
    bool isEmpty()
    {
        return top == 0;
    }
    char pop()
    {
        return space[--top];
    }
    void push(char ch)
    {
        space[top++] = ch;
    }
private:
    int top;
    char space[1024];

};

int main()
{
    Stack s;
    s.init();

    for(char ch = 'a';!s.isFull()&& ch<='z';ch++)
    {
        s.push(ch);

    }
    while(!s.isEmpty())
        cout<<s.pop()<<endl;
    cout << endl;

    return 0;
}
