#include <iostream>

using namespace std;

struct Stu
{
    char name[30];
    char sex;
    float score;
};

int main()
{
    string *p = new string("china");// china is string type ~= int *p = new int(10);
    cout<<p<<endl;
    cout<<*p<<endl;

    char *q = "china";
    cout<<q<<endl;
    cout<<*q<<endl;

    return 0;
}
int main4()
{
    int *p = new int;
    delete p;
    int **pp = new int*[10];
    delete []pp;

    int (*ppp)[5] = new int[3][5];
    delete []ppp;
}

int main3()
{

//    int (*p)[3][5] = new int[2][3][5]; // 3D array

    int (*p)[5] = new int[3][5]; // 2D array
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            p[i][j] = i+j;
        }
    }

    for(int i=0; i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main2()
{
//    malloc(10*sizeof(float));  // c
//    new float [10];            // cpp
    float *p = new float [10];
    for(int i=0; i<10;i++)
    {
        cout<<p[i]<<endl;

    }
    char **pp =new char *[10];
    for(int i=0; i<10;i++)
    {
        pp[i] = "china";
    }

    pp[10] = nullptr;

    while(*pp)
    {
        cout<<*pp++<<endl;
    }

    return 0;
}



int main1()
{
//    int *p = (int *)malloc(sizeof(int)); //c
    int *p = new int; // cpp
    *p = 100;

    cout << *p << endl;

    // new pointer
//    (int**)malloc(sizeof(int*));
    int **pp = new int *; //cpp

    // new struct
    Stu *ps = new Stu;

    return 0;
}
