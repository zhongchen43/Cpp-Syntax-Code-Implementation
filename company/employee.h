#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
public:
    Employee();
    virtual void init() = 0;
    virtual void promote() = 0;
    virtual void calcSalary() = 0;
    virtual void disInfo() = 0;
protected:
    string name_;
    int num_;
    int level_;
    float salary_;
    static int startNumber_;
};

#endif // EMPLOYEE_H
