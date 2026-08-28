//Program to print power set
#include <iostream>
using namespace std;

void power_set(int [], int [], int, int, int);
//power(array, subset, length, arr index, subset index)
//using same variable names in main method and user-defined method

int main()
{
    int arr_input[100];
    int arr[100];
    int subset[100];
    int n, k=0, count=0;
    cout<<"Enter the length of the array: ";
    cin>>n;

    cout<<"Enter the array"<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr_input[i];
    }

    //removing duplicates
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<k ; j++)
        {
            if (arr_input[i]==arr[j])
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            arr[k] = arr_input[i];
            k++;
        }
        count=0;
    }

    cout<<"Power set: "<<endl;
    power_set(arr, subset, k, 0, 0);
    return 0;
}

void power_set(int arr[], int subset[], int n, int index, int subindex)
{
    if (n==index)
    {
        cout<<"{ ";
        for (int i=0 ; i<subindex ; i++)
        {
            cout<<subset[i]<<" ";
        }
        cout<<"}"<<endl;
        return;
    }

    power_set(arr, subset, n, index+1, subindex);

    subset[subindex] = arr[index];

    power_set(arr, subset, n, index+1, subindex+1);
}