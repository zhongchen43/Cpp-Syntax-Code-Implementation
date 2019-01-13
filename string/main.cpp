#include <iostream>

using namespace std;

int main()
{
    string s("china");
    cout<<sizeof(string)<<endl;
    cout << sizeof(s)<< endl;

    cout<<s.size()<<endl;

    string s1 = "china";

    if (s==s1)
        cout<<" == ";
    else
        cout<<" != ";

//    getline(cin,s);
//    cout<<s<<endl;


    return 0;
}
