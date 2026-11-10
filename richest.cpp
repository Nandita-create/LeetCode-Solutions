//Richest Customer Wealth
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int max = 0;
        int len = accounts.size();
        for (int i=0 ; i<len ; i++)
        {
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            //accumulate() gives sum of all vector elements
            if (sum>max)
            max = sum;
        }
        return max;
    }
};

int main()
{
    int n, m;
    cout<<"Enter number of customers: ";
    cin>>n;
    cout<<"Enter number of bank accounts: ";
    cin>>m;

    vector<vector<int>> accounts(n, vector<int>(m));
    cout<<"Enter wealth of each customer in each bank account: "<<endl;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>accounts[i][j];
        }
    }

    Solution find;

    int result = find.maximumWealth(accounts);
    cout<<"Maximum Wealth is: "<<result<<endl;

    return 0;
}

//run using: 
//g++ richest.cpp -o richest
//./richest