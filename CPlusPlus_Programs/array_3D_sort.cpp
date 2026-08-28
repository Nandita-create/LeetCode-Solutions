//Program to sort a 3D array
#include <iostream>
using namespace std;

int main()
{
    int arr[50][50][50], sort[125000]; 
    //as there are 50 layers (or blocks), 50 rows and 50 columns in arr[][][]

    int k, m, n, s=0, temp;
    //k=no. of layers, m=no.of rows, n=no. of columns, s is for index of sort[]

    cout<<"Enter the no. of layers in the array: ";
    cin>>k;
    cout<<"Enter the no. of rows in the array: ";
    cin>>m;
    cout<<"Enter the no. of columns in the array: ";
    cin>>n;

    cout<<"Enter the "<<(k*m*n)<<" elements of the array: "<<endl;
    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            for (int p=0 ; p<n ; p++)
            {
                cin>>arr[i][j][p];
            }
        }
    }

    cout<<"Array before sorting: "<<endl;
    for (int i=0 ; i<k ; i++)
    {
        printf("Layer %d \n" ,(i+1));
        for (int j=0 ; j<m ; j++)
        {
            for (int p=0 ; p<n ; p++)
            {
                cout<<arr[i][j][p]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;

    //putting 3D array in 1D array form
    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            for (int p=0 ; p<n ; p++)
            {
                sort[s] = arr[i][j][p];
                s++;
            }
        }
    }

    //sorting 1D array sort[] using bubble sort

    for (int i=0 ; i<(k*m*n) ; i++)  //(k*m*n) is no. of elements in sort[]
    {
        for (int j=0 ; j<((k*m*n)-1) ; j++)
        {
            if (sort[j]>sort[j+1])
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }

    //putting 1D array in 3D array form, again
    s=0;  //reset sort[] index to 0

    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            for (int p=0 ; p<n ; p++)
            {
                arr[i][j][p] = sort[s];
                s++;
            }
        }
    }

    cout<<"Sorted Array: "<<endl;
    for (int i=0 ; i<k ; i++)
    {
        cout<<"Layer "<<(i+1)<<endl;
        for (int j=0 ; j<m ; j++)
        {
            for (int p=0 ; p<n ; p++)
            {
                cout<<arr[i][j][p]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}