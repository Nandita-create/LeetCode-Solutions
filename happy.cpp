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
