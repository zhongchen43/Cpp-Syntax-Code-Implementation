#include <iostream>
#include "mylist.h"
using namespace std;

int main()
{
    // List program process
//    Node *head = createList();
//    insertList(head, data);
//    searchList(head,find);
//    traverseList(head);
//    destroyList(head);

    myList l;
    l.initList();

    for(int i=0;i<10;i++)
    {
        l.insertList(i);

    }

    l.traverseList();

    cout << "Hello World!" << endl;
    return 0;
}
