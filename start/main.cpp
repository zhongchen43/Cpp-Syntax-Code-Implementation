#include <iostream>

using namespace std;

int main()
{

    char *p = (char *)malloc(100);

    const int a = 100;
    const int *q = &a;

    int arr[2][3]; // int (*)[3]
    int (*pa)[3] = arr;

    cout << "Hello World!" << endl;

    return 0;
}
