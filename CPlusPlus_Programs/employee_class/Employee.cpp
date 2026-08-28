//actual functions mentioned in header file Employee
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

void Employee::acceptData()
{
    cout<<"Enter Employee ID: ";
    cin>>employee_id;

    cout<<"Enter Employee Name: ";
    getline(cin>>ws, employee_name);

    cout<<"Enter Basic Salary: ";
    cin>>basic_salary;
}

void Employee::displayData()
{
    cout<<"Employee ID: "<<employee_id<<endl;
    cout<<"Employee Name: "<<employee_name<<endl;
    cout<<"Basic Salary: Rs"<<basic_salary<<endl;
}