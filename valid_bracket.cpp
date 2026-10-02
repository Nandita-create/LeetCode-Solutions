/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
char stack[10000];
int top=-1;

    bool isValid(string s) {
        
        int len = s.length();
        auto count1 = count(s.begin(), s.end(), '(');
        auto count2 = count(s.begin(), s.end(), ')');
        auto count3 = count(s.begin(), s.end(), '{');
        auto count4 = count(s.begin(), s.end(), '}');
        auto count5 = count(s.begin(), s.end(), '[');
        auto count6 = count(s.begin(), s.end(), ']');
        if ((count1!=count2) || (count3!=count4) || (count5!=count6))
        return false;

        for (int i=0 ; i<len ; i++)
        {
            int output = Push(stack, top, s[i]);
            if (output==-1)
            return false;
        }
        return true;
    }

    int Push(char stack[], int& top, char value)
    {
        if (top==9999)
        return -1;

        if (value=='(' || value=='{' || value=='[')
        {
            top++;
            stack[top] = value;
        }
        
        else if (value==')' || value=='}' || value==']')
        {
            if (top==-1)
            return -1;

            char opening = (int)stack[top];
            Pop(stack, top);

            if ((value==')' && opening!='(') || (value=='}' && opening!='{') || value==']' && opening!='[')
            {
                return -1;
            }
        }
        return 0;
    }

    int Pop(char stack[], int& top)
    {
        if (top==-1)
        return -1;

        top--;
        return top;
    }
};

int main()
{
	string s;
	cout<<"Enter string: ";
	cin>>s;
	
	Solution valid;
	int result = valid.isValid(s);
	if (result==1)
	cout<<"true";
	
	else
	cout<<"false";
	return 0;
}

//run using: 
//g++ valid_bracket.cpp -o valid_bracket.exe
//./valid_bracket