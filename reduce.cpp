/*Given an integer num, return the number of steps to reduce it to zero.
In one step, if the current number is even, you have to divide it by 2, 
otherwise, you have to subtract 1 from it.*/
#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        if (num==0)
        return 0;
        
        int count = 0;
        int rem;
        while(num!=0)
        {
            rem = num%2;
            count++;
            if (rem==1)
            {
                num--;
                count++;
            }
            num = num/2;
        }
        count--;
        return count;
    }
};

int main() {
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	Solution steps;
	int result = steps.numberOfSteps(num);
	cout<<"Result: "<<result<<endl;
	return 0;
}

//run using: 
//g++ reduce.cpp -o reduce.exe
//./reduce