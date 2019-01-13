#include <iostream>
#include <stdlib.h>
#include "technician.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"

using namespace std;

int main()
{
//    Technician tech;
//    tech.promote();
//    tech.calcSalary();
//    tech.disInfo();

//    Manager man;
//    man.calcSalary();
//    man.promote();
//    man.disInfo();

//    SalesMan sm;
//    sm.init();
//    sm.calcSalary();
//    sm.promote();
//    sm.disInfo();

//    SalesManager smg;
//    smg.init();
//    smg.calcSalary();
//    smg.promote();
//    smg.disInfo();

    Employee * emp[] = {new Technician, new Manager, new SalesMan, new SalesManager};
    int sizeEmp = (sizeof(emp)/sizeof(emp[0]));
    for(int i = 0; i < sizeEmp; ++i)
    {
        emp[i]->init();
        emp[i]->calcSalary();
        emp[i]->promote();
        emp[i]->disInfo();
    }

    return 0;
}
