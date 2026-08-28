//Using dynamic memory allocation for array
#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int n;
    cout<<"Enter length of array: ";
    cin>>n;

    arr = new int[n];
    //'new int' allocates memory space for storing elements of array

    cout<<"Enter "<<n<<" elements of the array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"The entered array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        if (i==n-1)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<arr[i]<<", ";
        }
    }
    delete arr;  //frees occupied memory space
    return 0;
}

//in C++, after using new, the memory locations contain garbage values
//no different malloc, calloc for C++