/*Given two integers dividend and divisor, divide two integers without 
using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means 
losing its fractional part. 
For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.*/
#include <iostream>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (dividend==-2147483648 && divisor==-1)
        return 2147483647;

        long long a = dividend;
        long long b = divisor;

        int sign = 1;

        if (a<0)
        {
            sign = -sign;
            a = -a;
        }

        if (b<0)
        {
            sign = -sign;
             b = -b;
        }
        long long quotient = 0;

        while (a>=b)
        {
            long long temp = b;
            long long multiple = 1;

            while ((temp<<1)<=a)
            {
                temp = temp<<1;
                multiple = multiple<<1;
            }

            a = a-temp;
            quotient += multiple;
        }

        if (sign==-1)
        quotient = -quotient;

        return (int)quotient;
    }
};
//using bitwise left shift to get next multiple for certain divisor

int main() {
	int dividend, divisor;
	cout<<"Enter dividend: ";
	cin>>dividend;
	cout<<"Enter divisor: ";
	cin>>divisor;
	
	Solution division;
	int results = division.divide(dividend, divisor);
	cout<<"Result: "<<results<<endl;
	return 0;
}
//run using: 
//g++ division.cpp -o division
//./division