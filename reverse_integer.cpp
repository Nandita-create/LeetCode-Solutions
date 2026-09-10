/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 
32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
 */
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long rem;
        long long rev = 0;
        long long num = x;
        num = abs(num);

        while (num>0)
        {
            rem = num%10;
            rev = (rev*10) + rem;
            num = num/10;
        }
        if (x<0)
        {
            rev *= -1;
        }

        int power = 31;
        long long limit = static_cast<long long>(round(pow(2, power)));
        if (rev>(limit-1) || rev<-(limit))
        {
            return 0;
        }
        return rev;
    }
};

int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    Solution solution;
    int result = solution.reverse(x);
    cout<<"Result: "<<result<<endl;
    return 0;
}
//run using: 
//g++ reverse_integer.cpp -o reverse_integer
//./reverse_integer