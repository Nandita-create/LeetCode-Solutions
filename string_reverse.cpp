/*You are given a string s that consists of lower case English letters and brackets.
Reverse the strings in each pair of matching parentheses, starting from the innermost one.
Your result should not contain any brackets.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        
        int len = s.length();
        for (int i=len-1 ; i>=0 ; i--)
        {
            if (s[i]=='(')
            {
                size_t close = s.find(')', i);
                static_cast<int>(close);

                reverse(s.begin()+i, s.begin()+i+1);
                s[i] = ' ';
                s[close] = ' ';
            }
        }

        string str;
        int size = 0;
        for (int i=0 ; i<len ; i++)
        {
            if (s[i]!=' ')
            {
                str.push_back(s[i]);
                size++;
            }
        }
        return str;
    }
};

int main()
{
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	
	Solution reverse;
	string result = reverse.reverseParentheses(s);
	cout<<"Result: "<<result<<endl;
	return 0;
}
//run using: 
//g++ string_reverse.cpp -o string_reverse
//./string_reverse