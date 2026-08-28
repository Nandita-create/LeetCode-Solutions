//main() function to call superclass functions
//only including header file Student.h not Student.cpp
#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
    Student s;
    s.acceptData();
    s.calculateResult();
    cout<<endl;
    s.displayData();
    return 0;
}

//to run use:
//cd student_class
//g++ marks.cpp Student.cpp -o marks to create a marks.exe
//then run by entering "./marks"