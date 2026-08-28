#include <iostream>

int main()
{
    int a = 12;
    int b = 34;
    int temp;
    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    temp = a;
    a = b;
    b = temp;
    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    return 0;
}