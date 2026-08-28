//Program To find sum of the digits of the 3 digit no without loop
#include <iostream>
using namespace std;

int main()
{
    int num, first, second, third;
    cout<<"Enter a 3 digit no.: ";
    cin>>num;
    int n = num;
    int sum = (num%10);
    first = num/100;  //extracts 1st digit
    second = (num/10)%10;  //extracts 2nd digit
    third = num%10;  //extracts 3rd digit
    sum = first + second + third;
    cout<<"Sum of the digits of "<<n<<" is: "<<sum<<endl;
    return 0;
}