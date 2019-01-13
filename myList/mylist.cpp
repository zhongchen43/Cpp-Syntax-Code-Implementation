#include <iostream>
#include "mylist.h"

void myList::initList()
{
    head = new Node;
    head->next = nullptr;
}

void myList::insertList(int data)
{
    Node * cur = new Node;
    cur->data = data;

    cur->next = head->next;
    head->next = cur;
}

void myList::traverseList()
{
    Node * subHead = head->next;
    while(subHead)
    {
        std::cout<<subHead->data<<std::endl;
        subHead = subHead->next;
    }
}

void myList::destroyList()
{
    Node * t;
    while(head)
    {
        t = head;
        head = head->next;
        delete t;
    }
}
