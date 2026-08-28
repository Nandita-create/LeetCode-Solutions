#include "Manager.h"  //as Manager.h already includes "Employee.h"
#include <iostream>
using namespace std;

void Manager:: acceptManagerData()
{
    acceptData();  //instead of Employee::acceptData()
    cout<<"Enter Bonus: ";
    cin>>bonus;
    cout<<"Enter department: ";
    getline(cin>>ws, department);
    cout<<endl;
}

int Manager::calculateSalary()
{    
    total = basic_salary + bonus;
    return total;
}

void Manager::displayManagerDetails()
{
    displayData();
    cout<<"Bonus: Rs."<<bonus<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Total Salary: Rs."<<calculateSalary()<<endl;
}