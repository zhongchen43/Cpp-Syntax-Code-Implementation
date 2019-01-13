#include "employee.h"

int Employee::startNumber_ = 1000;
Employee::Employee()
{
    level_ = 1;
    num_ = startNumber_++;
}
