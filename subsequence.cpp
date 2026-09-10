#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s=="")
        return true;
        
        int len1 = s.length();
        int index = 0;
        int len2 = t.length();
        for (int i=0 ; i<len2 ; i++)
        {
            if (s[index]==t[i])
            {
               if (index==len1-1)
               return true;

               index++; 
            }
        }
        return false;
    }
};

int main()
{
    string s, t;
    cout<<"Enter 1st string: ";
    cin>>s;  //not using getline() as this string should not have spaces

    cout<<"Enter 2nd string: ";
    cin>>t;

    Solution sequence;
    bool result = sequence.isSubsequence(s, t);

    if (result==true)
    cout<<"true \n";

    else
    cout<<"false \n";
    return 0;
}
//run using: 
//g++ subsequence.cpp -o subsequence
//./subsequence