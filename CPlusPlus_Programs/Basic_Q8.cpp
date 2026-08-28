//Program to Swap Values of Two Variables Without using Third Variable
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping"<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping"<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    return 0;
}