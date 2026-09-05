/*Given a string s, reverse the order of characters in each word within a sentence 
while still preserving whitespace and initial word order.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        int index = 0;

        if (s[0]==' ')
        index = 1;

        if (s[len-1]==' ')
        len = len - 1;

        for(int i=0 ; i<=len ; i++)
        {
            if (s[i]==' ' || i==len)
            {
                reverse(s.begin()+index, s.begin()+i);
                index = i+1;
            }
        }
        return s;
    }
};

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    Solution reverse;
    string result = reverse.reverseWords(str);
    
    cout<<"Result: "<<result<<endl;
    return 0;
}
//run using: 
//g++ reverse_words.cpp -o reverse_words
//./reverse_words