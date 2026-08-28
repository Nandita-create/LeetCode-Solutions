//This is the Header file of .h type for class Student
//It declares the variables and functions being used
//The .cpp file has the actual working of the function
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
//headers generally should not contain using namespace std;
//Because every file that includes Student.h will also inherit using namespace std;, 
//which can cause name conflicts in larger projects.

class Student
{
    private:
    std::string name;
    int roll_no;
    int marks;

    public:
    void acceptData();
    std::string calculateResult();
    void displayData();
};

#endif
//Every class declaration should end with a semicolon