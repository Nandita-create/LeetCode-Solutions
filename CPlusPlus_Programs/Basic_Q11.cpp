//Program to Convert Time in Seconds to Hours Minutes and Seconds
#include <iostream>
using namespace std;

int main()
{
    int time;
    cout<<"Enter time in seconds: ";
    cin>>time;
    int hours = time/3600;
    int min = (time%3600)/60;
    int sec = time%60;
    cout<<time<<" seconds can be denoted as: "<<endl;
    cout<<hours<<" Hours, "<<min<<" Minutes, "<<sec<<" seconds"<<endl;
    return 0;
}