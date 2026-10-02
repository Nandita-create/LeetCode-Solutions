/**/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<string> result;
    vector<string> generateParenthesis(int n) {
        Generate("", n, result);
        return result;
    }

    void Generate(string current, int n, vector<string>& result)
    {
        if (current.length()==n*2)
        {
            if (checkValid(current, n*2)==true)
            {
                result.push_back(current);
            }
            return;
        }

        Generate(current+'(', n, result);  //'+' operator to add character to string
        Generate(current+')', n, result);
    }

    //instead of stack, easier was to check if parenthesis are balanced or not
    bool checkValid(string current, int len)
    {
        int balanced = 0;
        for (int i=0 ; i<len ; i++)
        {
            if (current[i]=='(')
            balanced++;

            else
            balanced--;

            if (balanced<0)
            return false;
        }
        if (balanced==0)
        return true;

        else
        return false;
    }
};

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    vector<string> results = Solution().generateParenthesis(n);
    cout<<"Results: "<<endl;
    for(int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//run using: 
//g++ generate_parentheses.cpp -o generate_parentheses.exe
//./generate_parentheses