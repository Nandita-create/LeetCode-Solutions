#include <iostream>
#include <iomanip>
#include <cmath>
//cmath is the math library for c++

int main()
{
    const double pi = 3.14;
    double radius;
    double area;
    //gives the variable pi a constant value that cannot be changed
    std::cout<<"Enter the radius: ";
    std::cin>>radius;
    area = pi*pow(radius, 2);
    std::cout<<"Area of the circle is: "<<std::fixed<<std::setprecision(2)<<area<<" unit sq."<<std::endl;
    //std::endl used to move curor to new line for the next statement
    return 0;
}