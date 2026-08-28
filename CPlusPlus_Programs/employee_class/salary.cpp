//salary.cpp has main function
#include "Manager.h"
#include <iostream>
using namespace std;

int main()
{
    Manager *company;
    int n, max;
    cout<<"Enter number of managers: ";
    cin>>n;

    company = new Manager[n];
    //Manager used instead of a datatype here, as Manager is an object with a certain size

    for (int i=0 ; i<n ; i++)
    {
        cout<<"Manager "<<i+1<<endl;
        company[i].acceptManagerData();
        cout<<endl;
    }

    cout<<"MANAGER DETAILS"<<endl;
    cout<<"--------------------------------"<<endl;
    for (int i=0 ; i<n ; i++)
    {
        company[i].displayManagerDetails();
        cout<<"--------------------------------"<<endl;
    }
    cout<<endl;

    max = 0;  //stores value at first index, acts like pointer
    for (int i=0 ; i<n ; i++)
    {
        if (company[max].total<company[i].total)
        {
            max = i;
        }
    }
    cout<<"Manager with highest total salary is: "<<company[max].employee_name<<endl;
    cout<<"Highest Salary: Rs."<<company[max].total<<endl;
    return 0;
}

//to run use:
//cd employee_class
//g++ salary.cpp Employee.cpp Manager.cpp -o salary to create a salary.exe
//then run by entering "./salary"