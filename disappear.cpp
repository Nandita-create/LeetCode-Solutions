/*Numbers Disappeared from the Array*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int len = nums.size();
        vector<int> result;

        for (int i=0 ; i<len ; i++)
        {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
            {
                nums[index] = -nums[index];
            }
        }
        
        for (int i=0 ; i<len ; i++)
        {
            if (nums[i]>0)
            result.push_back(i+1);
        }
        return result;
    }
};

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter vector elements: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    Solution missing;
    vector<int> results = missing.findDisappearedNumbers(nums);

    cout<<"Results: ";
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//run using: 
//g++ disappear.cpp -o disappear
//./disappear