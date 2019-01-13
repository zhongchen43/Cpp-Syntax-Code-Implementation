#ifndef __MYLIST_H_
#define __MYLIST_H_


struct Node
{
    int data;
    struct Node *next;
};

class myList
{
public:
    void initList();
    void insertList(int data);
    Node * searchList();
    void traverseList();
    void destroyList();

private:
    Node *head;
};

#endif
