#include "salesman.h"

SalesMan::SalesMan()
{
}

void SalesMan::init()
{
    cout<<"Input the sales manager's name: ";
    cin>>name_;
//    num_ = startNumber_++;
//    level_ = 1;
    cout<<"Please input sale amout: ";
    cin>>monthSaleAmount_;
    rate_ = 0.04;
}

void SalesMan::promote()
{
    level_ = 1;
}
void SalesMan::calcSalary()
{
    salary_ = monthSaleAmount_ * rate_;
}
void SalesMan::disInfo()
{
    cout<<"********"<<endl;
    cout<<"Name: "<<name_<<endl;
    cout<<"Work number: "<<num_<<endl;
    cout<<"Level: "<<level_<<endl;
    cout<<"Saraly for current month: "<<salary_<<endl;
    cout<<"----------------------------------"<<endl;
}
