/*You are given an integer n.

Return the total number of commas used when writing all integers from
 [1, n] (inclusive) in standard number formatting.

In standard formatting:
A comma is inserted after every three digits from the right.
Numbers with fewer than 4 digits contain no commas.*/
#include <iostream>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        for (int i=1 ; i<=n ; i++)
        {
            count += comma(i);
        }
        return count;
    }

    int comma(int num)
    {
        int len = 0;
        int rem;
        while(num>0)
        {
            rem = num%10;
            len++;
            num = num/10;
        }

        if (len<4)
        return 0;

        //according to international comma system 1,000,000
        int comma = len/3;
        
        if (len%3==0)
        comma--;

        return comma;
    }
};
    
int main() {
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	Solution count;
	int result = count.countCommas(n);
	
	cout<<"Result: "<<result<<endl;
	return 0;
}