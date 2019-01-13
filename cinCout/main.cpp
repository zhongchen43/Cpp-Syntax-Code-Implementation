#include <iostream>
#include <iomanip> //manipulate

using namespace std;

int main()
{
//    int a, b,c;
//    cin>>a>>b>>c;
//    cout<<a<<b<<c;
#if 0
    // safely input
    char buf[10];
    fgets(buf,10,stdin); // safe in c

    cin.getline(buf,10); //safe in cpp

    string str; // string instead of char *
    cin>>str; // safer in cpp
    cout<<str<<endl;
#endif

#if 0
    int data = 1234;
    cout<<data<<endl;
    cout<<hex<<data<<endl;
    cout<<oct<<data<<endl;
    cout<<dec<<data<<endl;
#endif

//    float f = 1.234;
//    cout<<"***"<<setw(10)<<setiosflags(ios::right)<<f<<"***"<<endl; // import <iomanip> firstly


//    int a = 12;
//    int b = 3;
//    int c = 5;

//    cout<<setfill('0')<<setw(2)<<a<<":"<<setw(2)<<b<<":"<<setw(2)<<c<<"\n";

    float f = 1.23456;
    cout<<setprecision(4)<<f<<endl;




    return 0;
}
