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