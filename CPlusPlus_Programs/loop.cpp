#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from 0 to "<<n<<" are: "<<endl;
    for (int i=0 ; i<=n ; i++)
    {
        cout<<i<<endl;
    }
    //same loop syntax as that of c
    return 0;
}