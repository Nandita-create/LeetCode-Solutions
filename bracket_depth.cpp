/*Given a valid parentheses string s, return the nesting depth of s. 
The nesting depth is the maximum number of nested parentheses.
*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
int arr[100];
int index = 0;
int top = -1;
int* stack = new int[100];

    int maxDepth(string s) {
        
        int len = s.length();
        int maximum = 0;
        for (int i=len ; i>=0 ; i--)
        {
            if (s[i]=='(' || s[i]==')')
            {
                Push(stack, top, s[i]);
            }

            if (top+1>maximum)
            maximum = top+1;
        }
        
        return maximum;
    }

    void Push(int stack[], int& top, char value)
    {
        if (top==99)
        {
            return;
        }

        if (value==')')
        {
            Pop(stack, top);
            return;    
        }
        top++;
        stack[top] = value;
        return;
    }

    int Pop(int stack[], int& top)
    {
        if (top==-1)
        {
            return -1;
        }

        top--;
        return top;
    }
};

int main()
{
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	
	Solution depth;
	int result = depth.maxDepth(s);
	cout<<"Result: "<<result<<endl;
	return 0;
}

//Otherwise just remember that the depth of any element is
//(no. of left brackets to the element) - (no. of right brackets to the element)

//run using: 
//g++ bracket_depth.cpp -o bracket_depth.exe
//./bracket_depth