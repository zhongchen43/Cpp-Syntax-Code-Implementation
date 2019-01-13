#ifndef TECHNICIAN_H
#define TECHNICIAN_H
#include "employee.h"

class Technician:public Employee
{
public:
    Technician();
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();
protected:
    int amountHour_;
    int moneyPerHour_;
};

#endif // TECHNICIAN_H
