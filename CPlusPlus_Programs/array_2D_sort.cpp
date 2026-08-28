//Program to sort 2D array
#include <iostream>
using namespace std;

int main()
{
    int arr[100][100], sort[10000];  //as arr[100][100] ca store upto 10000 elements
    int m, n, k=0, temp;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;

    cout<<"Enter the "<<(m*n)<<" elements of the array: "<<endl;
    for (int i=0 ; i<m ; i++)
    {
         for (int j=0 ; j<n ; j++)
         {
            cin>>arr[i][j];
         }
    }

    cout<<"Array before sorting: "<<endl;
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //storing 2D array elements in 1D array
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            sort[k] = arr[i][j];
            k++;
        }
    }

    //sorting 1D array by bubble sort
    for (k=0 ; k<(m*n) ; k++)
    {
        for (int j=0 ; j<((m*n)-1) ; j++)
        {
            if (sort[j] > sort[j+1])
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }

    k=0;  //reset k to 0 index

    //putting 1D array into 2D array form
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            arr[i][j] = sort[k] ;
            k++;
        }
    }

    //printing sorted array
    cout<<"Sorted Array: "<<endl;
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}