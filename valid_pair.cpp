/*You are given a string s consisting only of digits. 
A valid pair is defined as two adjacent digits in s such that:

The first digit is not equal to the second.
Each digit in the pair appears in s exactly as many times as its numeric value.
Return the first valid pair found in the string s when traversing from left to right. 
If no valid pair exists, return an empty string.
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string findValidPair(string s) {
        
        int len = s.length();
        int count1, count2, num1, num2;
        string result = "";
        for (int i=0 ; i<len-1 ; i++)
        {
            if (s[i]!=s[i+1])
            {
                count1 = count(s.begin(), s.end(), s[i]);
                count2 = count(s.begin(), s.end(), s[i+1]);
                num1 = s[i] - '0';
                num2 = s[i+1] - '0';
                if ((count1==num1)&&(count2==num2))
                {
                    result.push_back(s[i]);
                    result.push_back(s[i+1]);
                    return result;
                }
            }
        }
        return result;
    }
};

int main()
{
    string s;
    cout<<"Enter a continuous string of numbers: ";
    cin>>s;  //not using getline() as we do not need any spaces anyways

    Solution valid;
    string results = valid.findValidPair(s);

    cout<<"Result: "<<results<<endl;
    return 0;
}
//run using: 
//g++ valid_pair.cpp -o valid_pair
//./valid_pair