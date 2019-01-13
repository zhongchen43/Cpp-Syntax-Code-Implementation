#include <iostream>
#include <string.h>

using namespace std;

class University
{
public:
    University(string t, string l)
    {
        tower_ = t;
        lake_ = l;
    }

    static string & getLib()
    {
        return lib_;
    }

//    static string lib_;

    void dis()
    {
        cout<<"tower:"<<"lake:"<<"graph:"<<lib_<<endl;
    }

private:
    string tower_;
    string lake_;
    static string lib_;
};

string University::lib_ = "";

int main()
{
    University pk("pkTower","pkLake");
    University tamu("towerTamu", "tamuLake");

    University::getLib() += "ni";
    pk.dis();
    University::getLib() += "ni";
    pk.dis();

    return 0;
}
