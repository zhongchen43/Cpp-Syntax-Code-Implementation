#include <iostream>
#include "appdelegate.h"
using namespace std;

int main()
{
    AppDelegate app;
//    CCApplication *p = &app;
//    p->run();
    return CCApplication::sharedApplication()->run();

}
