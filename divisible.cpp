/*You are given a positive integer n. 
Determine whether n is divisible by the sum of the following two values:
The digit sum of n (the sum of its digits).
The digit product of n (the product of its digits).
Return true if n is divisible by this sum; 
otherwise, return false.*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int rem, sum=0, prod=1;
        int num = n;
        while(n>0)
        {
            rem = n%10;
            sum += rem;
            prod *= rem;
            n = n/10;
        }

        if (num%(sum+prod)==0)
        return true;

        else
        return false;
    }
};

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    Solution divisible;
    if (divisible.checkDivisibility(n))
    cout<<"True"<<endl;

    else
    cout<<"False"<<endl;
}
//run using: 
//g++ divisible.cpp -o divisible
//./divisible