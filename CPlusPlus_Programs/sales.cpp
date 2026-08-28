//input sales, calculate state tax (4%), county tax (2%) and display along with total tax
#include <iostream>

using namespace std;

int main()
{
    double sales;
    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;
    //rate can be modified only in one place

    cout<<"Enter sales (in $): ";
    cin>>sales;
    //this >> is the stream extraction operator

    double state_tax = sales*state_tax_rate;
    double county_tax = sales*county_tax_rate;
    double total_tax = state_tax + county_tax;

    cout<<"Total sales: $"<<sales<<endl;
    cout<<"State tax: $"<<state_tax<<endl;
    cout<<"County tax: $"<<county_tax<<endl;
    cout<<"Total tax: $"<<total_tax<<endl;

    return 0; 
}