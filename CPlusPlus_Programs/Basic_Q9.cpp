//Program to Swap Values of Two Variables by using Third Variable
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int temp;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    cout<<"Before Swapping"<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;

    cout<<"After Swapping"<<endl;
    cout<<"a = "<<a<<" and b ="<<b<<endl;
    return 0;
}