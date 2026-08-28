#include <iostream>
#include <iomanip>  
//for std::fixed and std::setprecision to print certain no. of decimal places
//iomanip is input/output manipulators

using namespace std;
//by mentioning this, we can access all std functions without having to repeatedly mention std
//for eg. instead of std::cout and std::endl,
//just write cout and endl
//but always mention this line if doing so

int main()
{
    double x = 10;
    double y = 5;
    double z = (x+10)/(3*y);
    cout<<"z = "<< fixed << setprecision(2) <<z<< endl;
    //std::cout<<"z = "<<std::fixed<<std::setprecision(2)<<z<<std::endl;
    return 0;
    //std::endl denotes end of the line
}