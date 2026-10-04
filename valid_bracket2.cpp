/*Given a string s containing only three types of characters: 
'(', ')' and '*', return true if s is valid.

The following rules define a valid string:
Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or 
a single left parenthesis '(' or an empty string "".*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
char stack[100];
int top = -1;
    bool checkValidString(string s) {
        
        int len = s.length();
        int low = 0;
        int high = 0;
        int count = 0;

        for (int i=0 ; i<len ; i++)
        {
            if (s[i]=='(')
            {
                low++;
                high++;
            }

            else if (s[i]==')')
            {
                low--;
                high--;
            }

            else //when s[i]='*'
            {
                low--;
                high++;
            }

            if (high<0)
            return false;

            if (low<0)
            low = 0;
        }

        if (low==0)
        return true;

        else
        return false;
    }
};

int main() {
	string s;
	cout<<"Enter string: ";
	cin>>s;
	
	Solution check;
	
	int result = check.checkValidString(s);
	
	if (result==1)
	cout<<"true"<<endl;
	
	else
	cout<<"false"<<endl;
	
	return 0;
}

//run using: 
//g++ valid_bracket2.cpp -o valid_bracket2.exe
//./valid_bracket2