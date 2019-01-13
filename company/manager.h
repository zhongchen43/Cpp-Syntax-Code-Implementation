#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"


class Manager:virtual public Employee
{
public:
    Manager();
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();
protected:
    float fixedSalary_;

};

#endif // MANAGER_H
