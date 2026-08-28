//Program to print Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int n, term1=0, term2=1, next_val;
    cout<<"Enter number of elements in the Fibonacci Series: "<<endl;
    cin>>n;  //no need for &n here in c++

    for (int i=1 ; i<=n ; i++)
    {
        cout<<term1<<" ";
        next_val = term1 + term2;
        term1 = term2;
        term2 = next_val;
    }
    cout<<endl;
    return 0;
}