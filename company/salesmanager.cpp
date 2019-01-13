#include "salesmanager.h"


SalesManager::SalesManager()
{

}

void SalesManager::init()
{
        cout<<"Input the name of sales manager: ";
        cin>>name_;
//        num_ = startNumber_++;
//        level_ = 1;
        cout<<"Please input fixed base salary: ";
        cin>>fixedSalary_;
        cout<<"Please input sale amout: ";
        cin>>monthSaleAmount_;
        rate_ = 0.05;
}

void SalesManager::promote()
{
    level_ += 3;
}
void SalesManager::calcSalary()
{
    salary_ = fixedSalary_ + monthSaleAmount_ * rate_;
}
void SalesManager::disInfo()
{
    cout<<"********"<<endl;
    cout<<"Name: "<<name_<<endl;
    cout<<"Work number: "<<num_<<endl;
    cout<<"Level: "<<level_<<endl;
    cout<<"Saraly for current month: "<<salary_<<endl;
    cout<<"----------------------------------"<<endl;
}
