#include "appdelegate.h"
#include <iostream>
using namespace std;

AppDelegate::AppDelegate()
{

}

bool AppDelegate::applicationDidFinishLaunching()
{
    cout<<"Game begin!"<<endl;
    return true;
}
