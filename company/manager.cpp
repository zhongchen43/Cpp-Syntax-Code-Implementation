#include "manager.h"

Manager::Manager()
{
}
void Manager::init()
{
    cout<<"Input the manager name: ";
    cin>>name_;
//    num_ = startNumber_++;
//    level_ = 1;
    cout<<"Please input fixed salary: ";
    cin>>fixedSalary_;
}

void Manager::promote()
{
    level_ += 4;
}
void Manager::calcSalary()
{
    salary_ = fixedSalary_;
}
void Manager::disInfo()
{
    cout<<"********"<<endl;
    cout<<"Name: "<<name_<<endl;
    cout<<"Work number: "<<num_<<endl;
    cout<<"Level: "<<level_<<endl;
    cout<<"Fixed base salary: "<<fixedSalary_<<endl;
    cout<<"----------------------------------"<<endl;
}
