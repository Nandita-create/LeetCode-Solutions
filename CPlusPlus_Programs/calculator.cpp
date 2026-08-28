#include <iostream>

int main()
{
    int a, b;
    std::cout<<"Enter the two numbers: ";
    std::cin>>a>>b;
    //take input together instead of separate lines of code
    /*std::cout<<"Enter the first no.: ";
    std::cin>>a;
    std::cout<<"Enter the second no.: ";
    std::cin>>b;*/

    int sum = a+b;
    int diff = a-b;
    int prod = a*b;
    int quot = a/b;
    int mod = a%b;
    std::cout<<"Sum: "<<sum<<std::endl;
    std::cout<<"Difference: "<<diff<<std::endl;
    std::cout<<"Product: "<<prod<<std::endl;
    std::cout<<"Quotient: "<<quot<<std::endl;
    std::cout<<"Remainder: "<<mod<<std::endl;

    int x = 6;
    int y = x++; 
    std::cout<<"x = "<<x<<" and y = "<<y<<std::endl;
    //here, value of x is assigned to y, then x is incremented
    //x=6; y=6, then x became 7 when mentioned while printing

    int z = ++x;  
    std::cout<<"x = "<<x<<" and z = "<<z<<std::endl;
    //here, x is incremented by 1 then result is stored in z
    //x=8; y=8;
    return 0;
}