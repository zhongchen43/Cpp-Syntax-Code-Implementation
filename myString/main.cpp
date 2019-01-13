#include <iostream>
#include <string>
#include "mystring.h"

using namespace std;

int main()
{
    /*
    string s;
    string s1("china");
    string s2(s1);
    string s3 = s2;
    string s4 = s3;*/

    mystring ms = "china";
    mystring ms1 = " is a great country";
    if (ms==ms1)
        cout<<"=="<<endl;
    if(ms>ms1)
        cout<<">"<<endl;
    if(ms<ms1)
        cout<<"<"<<endl;

    mystring ms2 = ms += ms1;
    ms2.dump();

    cout<<ms1.at(4)<<endl;
    cout<<ms1[4]<<endl;
    cout<<ms1.c_str()<<endl;
    return 0;

}

#if 0
int main1()
{

    string s;
    string s1("china");

    cout<<s<<endl;
    cout<<s1<<endl;

    string s3(s1);
    cout<<s3<<endl;

    string s2 = s1 = s3;
    cout<<"***************"<<endl;

    mystring ms;
    cout<<&ms<<endl;
    mystring ms1("china");
    cout<<&ms1<<endl;
    ms.dump();
    ms1.dump();

    mystring ms3(ms1);
    cout<<&ms3<<endl;
    ms3.dump();
    return 0;
}
#endif
