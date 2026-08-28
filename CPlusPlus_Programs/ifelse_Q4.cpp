//Second Largest no out of 3 (Nested If-else)
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if (a==b && b==c)
    {
        cout<<"All numbers are equal"<<endl;
    }

    else
    {
        cout<<"The Second Largest no. is: ";
        if (a==b)
        {
            if (a>c)
            {
                cout<<c<<endl;
            }
            else if (c>a)
            {
                cout<<a<<endl;
            }
        }

        else if (a==c)
        {
            if (a>b)
            {
                cout<<b<<endl;
            }
            else if (b>a)
            {
                cout<<a<<endl;
            }
        }

        else if (b==c)
        {
            if (b>a)
            {
                cout<<a<<endl;
            }
            else if (a>b)
            {
                cout<<b<<endl;
            }
        }

        else if (a>b)
        {
            if (c>a)
            {
                cout<<a<<endl;
            }
            else if (c>b)
            {
                cout<<c<<endl;
            }
            else if (b>c)
            {
                cout<<b<<endl;
            }
        }

        else if (b>a)
        {
            if (c>b)
            {
                cout<<b<<endl;
            }
            else if (c>a)
            {
                cout<<c<<endl;
            }
            else if (a>c)
            {
                cout<<a<<endl;
            }
        }
    }
    return 0;
}