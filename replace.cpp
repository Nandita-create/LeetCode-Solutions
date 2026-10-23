#include <iostream>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {

        int count = 0;
        while (n>1)
        {
            if (n%2==0)
            n /= 2;

            else if (n==3 || (n & 2)==0)  
            n--;
            //for binary equivalents ending with 11, 
            //it is better to increment but for the ones ending in 01, 
            //it is better to decrement

            else
            n++;

            count++;
        }
        return count;
    }
};