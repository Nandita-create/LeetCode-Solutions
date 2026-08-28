//Switch to tell days of the week(mean 1 for Monday, 2 for Tuesday ……. 7 for sunday)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number from 1 to 7: ";
    cin>>n;
    switch (n)
    {
        case 1:
        cout<<"The day of the week is: Monday"<<endl;
        break;
        //always put break at the end of each case to prevent fall through

        case 2:
        cout<<"The day of the week is: Tuesday"<<endl;
        break;

        case 3:
        cout<<"The day of the week is: Wednesday"<<endl;
        break;

        case 4:
        cout<<"The day of the week is: Thursday"<<endl;
        break;

        case 5:
        cout<<"The day of the week is: Friday"<<endl;
        break;

        case 6:
        cout<<"The day of the week is: Saturday"<<endl;
        break;

        case 7:
        cout<<"The day of the week is: Sunday"<<endl;
        break;

        default:
        cout<<"Number entered should be from 1 to 7 only!!"<<endl;
    }
    return 0;
}