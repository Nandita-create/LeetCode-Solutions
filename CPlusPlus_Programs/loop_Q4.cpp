//Program to find sum of digits of a number
#include <iostream>
using namespace std;

int main()
{
    int n, num, rem, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    num = n;

    while (n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }

    cout<<"Sum of digits of "<<num<<" is: "<<sum<<endl;
    return 0;
}