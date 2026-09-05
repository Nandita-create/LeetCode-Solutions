/*Your laptop keyboard is faulty, and whenever you type a character 'i' on it, 
it reverses the string that you have written. Typing other characters works as expected.

You are given a 0-indexed string s, and you type each character of s 
using your faulty keyboard.

Return the final string that will be present on your laptop screen.*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        int len = s.length();
        string result = "";
        int count = 0;

        for (int i=0 ; i<len ; i++)
        {
            if (s[i]=='i' || s[i]=='I')
            {
                result = Reverse(result, count);
            }
            else
            {
                result.push_back(s[i]);
                count++;
            }
        }
        return result;
    }

    string Reverse(string s, int size)
    {
        string rev;
        for (int i=0 ; i<size ; i++)
        {
            rev.push_back(s[size-1-i]);
        }
        return rev;
    }
};

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    Solution final;
    
    string results = final.finalString(str);
    
    cout<<"Result: "<<results<<endl;
    return 0;
}
//run using: 
//g++ faulty_keyboard.cpp -o faulty_keyboard
//./faulty_keyboard