//Caluculator for both integer and float using function overload
#include <iostream>
using namespace std;

int sum(int, int);
float sum(float, float);

int main()
{
    int a, b;
    float m, n;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;

    cout<<"Enter 2 float numbers: ";
    cin>>m>>n;

    cout<<a<<" + "<<b<<" = "<<sum(a, b)<<endl;
    cout<<m<<" + "<<n<<" = "<<sum(m, n)<<endl;
    return 0;
}

int sum(int x, int y)
{
    return (x+y);
}

float sum(float p, float q)
{
    return (p+q);
}