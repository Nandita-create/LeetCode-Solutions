#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int len = s.length();
        int balanced = 0;
        int initial = 0;
        string result;

        for (int i=0 ; i<len ; i++)
        {
            if (s[i]=='(')
            balanced++;

            else
            balanced--;

            if (balanced==0)
            {
                s[initial] = ' ';
                s[i] = ' ';
                initial = i+1;

            }
        }

        for (int i=0 ; i<len ; i++)
        {
            if(s[i]!=' ')
            result.push_back(s[i]);
        }

        return result;
    }
};

int main()
{
    string s;
    cout<<"Enter sequence of parentheses: ";
    cin>>s;

    Solution bracket;
    string results = bracket.removeOuterParentheses(s);
    cout<<"Result: "<<results<<endl;
    return 0;
}

//run using: 
//g++ remove.cpp -o remove
//./remove