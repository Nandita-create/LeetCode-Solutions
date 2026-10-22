#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
        return {};
        
        vector<string> number = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
    
    vector<string> result;
    string copy = "";

    combination(0, copy, digits, result, number);
    return result;
}

    void combination(int i, string& copy, string& digits, vector<string>& result, vector<string>& number)
    {
        if (i==digits.size())
        {
            result.push_back(copy);
            return;
        }

        int digiNum = digits[i] - '0';
        string letters = number[digiNum];

        for (char c : letters)  //for character c in string letters for corresponding digit
        {
            copy.push_back(c);
            combination(i+1, copy, digits, result, number);
            copy.pop_back();  //backtracking
        }
    }
};

int main()
{
    string digits;
    cout<<"Enter digits: ";
    cin>>digits;

    Solution obj;
    vector<string> results = obj.letterCombinations(digits);

    cout<<"Results: "<<endl;
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }

    cout<<endl;
    return 0;
}