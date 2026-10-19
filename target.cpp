#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<int> result;
        for (int i=0 ; i<len ; i++)
        {
            if (nums[i]==target)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main()
{
    int n, target;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter vector elements: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[n];
    }

    cout<<"Enter target element: ";
    cin>>target;

    Solution obj;
    vector<int> results = obj.targetIndices(nums, target);
    cout<<"Results: "<<endl;
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    return 0;
}

//run using: 
//g++ target.cpp -o target
//./target