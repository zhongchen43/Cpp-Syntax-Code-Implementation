#ifndef SALESMANAGER_H
#define SALESMANAGER_H

#include "manager.h"
#include "salesman.h"


class SalesManager: public Manager, public SalesMan
{
public:
    SalesManager();
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();

};

#endif // SALESMANAGER_H
