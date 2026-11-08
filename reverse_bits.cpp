#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        
        string num = toBinReverse(n);
        int power = 0;
        int result = 0;
        
        for (int i=31 ; i>=0 ; i--)
        {
            if (num[i]=='1')
            {
                result = result + pow(2, power);
            }
            power++;
        }
        return result;
    }

    string toBinReverse(int n)
    {
        int rem;
        string reverse;
        while(n>0)
        {
            rem = n%2;
            reverse.push_back(rem+'0');
            n=n/2;
        }

        int len = reverse.size();
        for (int i=len ; i<32 ; i++)
        {
            reverse.push_back('0');
        }
        return reverse;
    }
};

int main() {
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	Solution bin;
	int results = bin.reverseBits(n);
	
	cout<<"Result of Reversed Bits: "<<results<<endl;
	
	return 0;
}