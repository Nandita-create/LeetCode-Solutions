/*Shuffle the Array*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> result;
        for (int i=0 ; i<n ; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[n+i]);
        }
        return result;
    }
};

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int> nums(2*n);
    cout<<"Enter vector elements: ";
    for (int i=0 ; i<2*n ; i++)
    {
        cin>>nums[i];
    }

    Solution alter;
    vector<int> results = alter.shuffle(nums, n);

    cout<<"Results: ";
    for (int i=0 ; i<nums.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//run using: 
//g++ alternate.cpp -o alternate
//./alternate