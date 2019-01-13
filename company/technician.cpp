#include "technician.h"

Technician::Technician()
{
}

void Technician::init()
{
    cout<<"Input the technician name: ";
    cin>>name_;
//    num_ = startNumber_++;
//    level_ = 1;
    cout<<"Please input the number of working time of this month: ";
    cin>>amountHour_;
    cout<<"Please input money per hour: ";
    cin>>moneyPerHour_;
}

void Technician::promote()
{
    level_ += 3;
}
void Technician::calcSalary()
{
    salary_ = amountHour_ * moneyPerHour_;
}
void Technician::disInfo()
{
    cout<<"********"<<endl;
    cout<<"Name: "<<name_<<endl;
    cout<<"Work number: "<<num_<<endl;
    cout<<"Level: "<<level_<<endl;
    cout<<"Saraly for current month: "<<salary_<<endl;
    cout<<"----------------------------------"<<endl;
}
