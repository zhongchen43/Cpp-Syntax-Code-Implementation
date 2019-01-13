#include <iostream>
#include <string.h>

using namespace std;

// inline have the advantages of macro and functions
// the function should be very small and be called very often
# define SQR(x) ((x)*(*))

inline int sqr(int x);

inline int sqr(int x)
{
    return x*x;
}

int main()
{
    int i = 0;
    while(i<5)
    {
        cout <<sqr(i++)<< endl;
    }

    return 0;
}
