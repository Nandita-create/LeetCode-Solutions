/*Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum 
of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), 
or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        
        int slow=n;
        int fast=n;
        do
        {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        } while(slow!=fast);

        if (fast==1)
        return true;
        
        else
        return false;
    }

    int getSum(int n)
    {
        int rem;
        int sum=0;
        while(n>0)
            {
                rem = n%10;
                sum = sum+(rem*rem);
                n=n/10;
            }
            return sum;
    }
};

int main() {
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	Solution number;
	int result = number.isHappy(n);
	
	if (result==1)
	cout<<"true";
	
	else
	cout<<"false";
	
	return 0;
}

//run using: 
//g++ happy.cpp -o happy.exe
//./happy