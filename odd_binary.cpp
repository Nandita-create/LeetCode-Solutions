/*You are given a binary string s that contains at least one '1'.
You have to rearrange the bits in such a way that the resulting 
binary number is the maximum odd binary number that can be created from this combination.
Return a string representing the maximum odd binary number that 
can be created from the given combination.

Note that the resulting string can have leading zeros.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int len = s.length();
        int count_val = count(s.begin(), s.end(), '1');
        
        string result;
        if (count_val==0)
        return "";

        count_val--;
        for (int i=0 ; i<len-1 ; i++)
        {
            if (count_val!=0)
            {
                result.push_back('1');
                count_val--;
            }

            else
            result.push_back('0');
        }
        
        result.push_back('1');
        return result;
    }
};

int main() {
	string s;
	cout<<"Enter string: ";
	cin>>s;
	
	Solution bin;
	
	string results = bin.maximumOddBinaryNumber(s);
	cout<<"Result: "<<results<<endl;
	return 0;
}

//run using: 
//g++ odd_binary.cpp -o odd_binary.exe
//./odd_binary