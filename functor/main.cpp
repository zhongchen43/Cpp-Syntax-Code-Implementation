#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>


using namespace std;

bool myCompare(int a, int b)
{
    return a>b;
}

class Compare
{
public:
    Compare(bool b = true)
        :flag_(b){}
    bool operator()(int a, int b)
    {
        if(flag_ == true)
            return a>b;
        else {
            return a<b;
        }
    }
private:
    bool flag_;
};

int main()
{
    int arr[6] = {1,3,5,4,7,6};
    vector<int> vi(arr,arr+6);

    sort(vi.begin(),vi.end(),Compare());

    //cpp 98 的标准，比较low。
//    vector<int>::iterator itr;
//    for(itr = vi.begin();itr != vi.end();++itr )
//    {
//        cout<<*itr<<endl;
//    }

    for(auto itr = vi.begin();itr != vi.end(); ++itr)
    {
        cout<<*itr<<endl;
    }

    //cpp 超前
//    for(auto i:vi)
//    {
//        cout<<i<<endl;
//    }
    cout << "Hello World!" << endl;
    return 0;
}
