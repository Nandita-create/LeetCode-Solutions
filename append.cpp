#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int slen = s.length();
        int tlen = t.length();
        int index = 0;
        for (int i=0 ; i<slen ; i++)
        {
            if (s[i]==t[index])
            {
                index++;
            }
        }
        
        return (tlen-index);
    }
};

int main()
{
    string s, t;
    cout<<"Enter 1st string: ";
    cin>>s;

    cout<<"Enter 2nd string: ";
    cin>>t;

    Solution append;
    int results = append.appendCharacters(s, t);

    cout<<"Result: "<<results<<endl;
    return 0;
}