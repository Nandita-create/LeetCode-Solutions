#include <iostream>
using namespace std;

int main()
{
    double ftemp, ctemp;
    cout<<"Enter the temperature is degree Fahrenheit: ";
    cin>>ftemp;
    if (ftemp>=-459.67)
    {
    ctemp = ((ftemp-32)*5)/9;
    cout<<"Temperature in degree Centigrade: "<<ctemp<<" degree Centigrade"<<endl;
    }
    else
    {
        cout<<"Temperature in entered must be greater than or equal to 459.67 degree Fahrenheit"<<endl;
    }
    //if-else ladder has same syntax as that of c
    return 0;
}