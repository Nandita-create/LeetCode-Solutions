//Find factorial using a function with a default parameter.
#include <iostream>
using namespace std;

int factorial(int n = 1);  
//default parameter, used if no argument is passed to the function
//functions being used later, need to be declared first in C++ just like in C

int main()
{
    int num;
    cout<<"Enter a no. to find the factorial: ";
    cin>>num;

    cout<<"Function call without argument: "<<factorial()<<endl;
    cout<<"Function call with argument: "<<factorial(num)<<endl;
    return 0;
}

//default argument mentioned only once during declaration, or here if not declared before
int factorial(int n)  
{
    int fact=1;
    for (int i=1 ; i<=n ; i++)
    {
        fact *= i;
    }
    return fact;
}