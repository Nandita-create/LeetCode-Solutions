/*Given a palindromic string of lowercase English letters palindrome, 
replace exactly one character with any lowercase English letter so that the 
resulting string is not a palindrome and that it is the lexicographically 
smallest one possible.

Return the resulting string. 
If there is no way to replace a character to make it not a palindrome, 
return an empty string.

A string a is lexicographically smaller than a string b (of the same length) 
if in the first position where a and b differ, a has a character strictly 
smaller than the corresponding character in b. For example, "abcc" is 
lexicographically smaller than "abcd" because the first position they differ 
is at the fourth character, and 'c' is smaller than 'd'.*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.length();
        string copy = palindrome;
        string result = "";
        int value = 0;
        int ascii = 97;
        char ch, initial;

        if (len==1)
        return result;

        //use static_cast<datatype> for char to ascii conversion and vice versa
        for (int i=0 ; i<len ; i++)
        {
            value = static_cast<int>(palindrome[i]);

            {
                ch = static_cast<char>(ascii);
                initial = palindrome[i];  //storing character already present
                palindrome[i] = ch;
                if(len>3 && ch=='a' && i==len-1)
                {
                    palindrome[i] = 'b';
                    return palindrome;
                }
                if ((isPalin(palindrome)==false))  
                //cannot be a Palindrome and should be lexicographically smaller
                return palindrome;

                else
                {
                    palindrome[i] = initial;
                }
            }
            if (i==len-1 && ascii<=122)
            {
                ascii++;
                i=0;
            }
        }
        return result;
    }

    bool isPalin(string str)
    {
        int size = str.length();
        int mid = size/2;
        for(int i=0 ; i<=mid ; i++)
        {
            if (i == (size-1-i))
            continue;

            if (str[i] != str[size-1-i])
            return false;
        }
        return true;
    }
};

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    Solution string_op;
    string result_str = string_op.breakPalindrome(str);

    cout<<"Result: "<<result_str<<endl;
    return 0;
}
//run using: 
//g++ break_palin.cpp -o break_palin
//./break_palin