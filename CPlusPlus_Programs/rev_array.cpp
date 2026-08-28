//Reverse an array by passing it by reference.
#include <iostream>
using namespace std;

void rev(int [], int);  
//for passing address of array, for reference
//Arrays decay to pointers when passed to functions.
//Therefore, modifications to the array inside the function
//affect the original array

int main()
{
    int arr[100];
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;

    cout<<"Enter elements of the array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original Array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rev(arr, n);

    cout<<"Reversed Array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

void rev(int a[], int n)
{
    int temp;
    for (int i=0 ; i<n/2 ; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp; 
    }
}

//C++ does not allowed arr[n] stricly has to be a no. like arr[50]
//we have to modify the array being passed by reference
//interchanging elements from 2 ends of the array