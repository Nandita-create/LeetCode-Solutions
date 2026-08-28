//Program to implement Selection Sort
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, temp;
    cout<<"Enter the length of the array: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements of the array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    //Sorting using selection sort
    for (int i=0 ; i<n ; i++)
    {
        int min = i;
        for (int j=i ; j<n ; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;  //storing index
            }
        }
        //swapping index and value, not only value without index
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    //printing sorted array
    cout<<"Sorted Array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//selection --> using index and storing in min