#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int len = s.length();
        int balanced = 0;
        int result = 0;
        
        for (int i=0 ; i<len ; i++)
        {
            if (s[i]=='(')
            balanced++;

            else
            {
                balanced--;
                if (balanced<0)
                {
                    balanced = 0;
                    result++;
                }
            }
        }

        return (result+balanced);
    }
};

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    Solution check;
    int results = check.minAddToMakeValid(s);
    cout<<"Results: "<<results<<endl;
    return 0;
}