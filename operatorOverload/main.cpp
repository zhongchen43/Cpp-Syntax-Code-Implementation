#include <iostream>

using namespace std;

struct Complex
{
    float real;
    float image;
};

Complex operator+(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.image = a.image + b.image;
    return sum;

}
int main()
{
    Complex sum;
    Complex a ={1,2};
    Complex b = {3,4};
    sum = a+b;

    cout<<sum.real<<"\n"<<sum.image<<"\n"<<endl;

    return 0;
}
