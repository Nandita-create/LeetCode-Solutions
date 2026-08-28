//header file for class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
    public:  //etter for calculations
    int employee_id;
    std::string employee_name;
    int basic_salary;

    public:
    void acceptData();
    void displayData();
};

#endif