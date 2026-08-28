//Derived class
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <iostream>
#include <string>

class Manager: public Employee  //as Manager is a derived class from Superclass Employee
{
    public:  //preferably keep private or protected is not being used as reference in main()
    int bonus;
    std::string department;
    int total;

    public:
    void acceptManagerData();
    int calculateSalary();
    void displayManagerDetails();
};
#endif