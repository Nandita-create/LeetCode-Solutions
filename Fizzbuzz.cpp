/*Given an integer n, return a string array answer (1-indexed) where:
answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>result;
        for (int i=1 ; i<=n ; i++)
        {
            if (i%15==0)
            {
                result.push_back("FizzBuzz");
            }

            else if (i%3==0)
            {
                result.push_back("Fizz");
            }

            else if (i%5==0)
            {
                result.push_back("Buzz");
            }

            else
            {
                string str = to_string(i);
                result.push_back(str);
            }
        }
        return result;
    }
};

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    Solution check;
    vector<string> results = check.fizzBuzz(n);
    cout<<"Result: ";
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    return 0;
}

//run using: 
//g++ Fizzbuzz.cpp -o Fizzbuzz.exe
//./Fizzbuzz