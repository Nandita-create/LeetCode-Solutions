#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    string maxSumOfSquares(int num, int sum)
    {
        string result = "";
        if (sum > 9*num)
        return result;

        for (int i=0 ; i<num ; i++)
        {
            int digit = min(9, sum);
            result += to_string(digit);
            sum -= digit;
        }
        return result;
    }
};

int main()
{
    int num, sum;
    cout<<"Enter num: ";
    cin>>num;

    cout<<"Enter sum: ";
    cin>>sum;

    Solution check;

    string result = check.maxSumOfSquares(num, sum);
    cout<<"result: "<<result<<endl;

    return 0;
}