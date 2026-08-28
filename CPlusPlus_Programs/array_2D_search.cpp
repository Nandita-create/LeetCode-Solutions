//Program to find an value in a 2D array
#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int m, n, key, count=0;
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

    cout<<"Entered array: "<<endl;
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the value to be searched: ";
    cin>>key;

    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (arr[i][j] == key)
            {
                cout<<"The value "<<key<<" is found at "<<endl<<"Row No.: "<<(i+1)<<endl<<"Column No.: "<<(j+1)<<endl;
                count++;
                break;
            }
        }
        if (count!=0)
        {
            break;
        }
    }

    if (count==0)
    {
        cout<<"Value "<<key<<" is not found in the array "<<endl;
    }
    return 0;
}