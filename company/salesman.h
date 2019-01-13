#ifndef SALESMAN_H
#define SALESMAN_H
#include "employee.h"


class SalesMan:virtual public Employee
{
public:
    SalesMan();
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();
protected:
    float monthSaleAmount_;
    float rate_;
};

#endif // SALESMAN_H
