#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        
        int rem, sum=0;
        while(num>=10)
        {
            sum=0;
            while(num>0)
            {
                rem = num%10;
                sum += rem;
                num = num/10;
            } 
            num=sum;
        }
        return num;
    }
};

int main() {
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	Solution sum;
	int result = sum.addDigits(num);
	
	cout<<"Result: "<<result<<endl;
	
	return 0;
}