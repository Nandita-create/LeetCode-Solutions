//This .cpp file has the working of the functions mentioned in Student.h
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

void Student::acceptData()
{
    cout<<"Enter Name: ";
    getline(cin>>ws,name);
    //cin.ignore(); used to prevent cin from considering previously stored data
    //or use getline(cin>>ws, str)
    //cin only reads word before space. getline reads entire string  

    cout<<"Enter Roll No.: ";
    cin>>roll_no;

    cout<<"Enter Marks: ";
    cin>>marks;
}

string Student::calculateResult()
{
    if (marks>=40)
    {
        return "Pass";
    }
    else
    {
        return "Fail";
    }
}

void Student::displayData()
{
    cout<<"STUDENT DETAILS"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No.: "<<roll_no<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"Result: "<<calculateResult()<<endl;
    //as other variable string result would only be local
}