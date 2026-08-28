//Modifying array using realloc equivalent in C++
#include <iostream>
#include <vector>  //to use dynamic array container library
using namespace std;

int main()
{
    int n, new_len;
    cout<<"Enter length of array: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements of the array: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original Array"<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"New length of array: ";
    cin>>new_len;
    arr.resize(new_len);

    if (new_len>n)
    {
    cout<<"Enter next elements: "<<endl;
    for (int i=n ; i<new_len ; i++)
    {
        cin>>arr[i];
    }
}

    cout<<"Modified Array"<<endl;
    for (int i=0 ; i<new_len ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//new cannot be resized like vector, that is why we prefer vector<datatype> arr(length)
//vector also gets deleted automatically by the end of the program
//also, no need to check for NULL value for new and malloc


/*For pre-defined array
int main()
{
    vector arr = {1, 2, 3, 4, 5};
    //initialising array

    cout<<"Original Array"<<endl;
    for (int i=0 ; i<5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //to resize to new length
    arr.resize(10);
    arr = {4, 5, 6, 7, 8, 9, 10};

    cout<<"Modified Array"<<endl;
    for (int i=0 ; i<10 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/