//Swapping nos. using references
#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
    int a, b;
    cout<<"Enter 2 numbers to be swapped: ";
    cin>>a>>b;

    cout<<"Before Swapping: "<<endl<<"a = "<<a<<" "<<"b = "<<b<<endl;

    swap(a, b);  //passing &a and &b would mean passing pointers

    cout<<"After Swapping: "<<endl<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// Using *x and *y is done with pointers.
// Using int &x and int &y (references) allows direct modification
// of the original variables without dereferencing.