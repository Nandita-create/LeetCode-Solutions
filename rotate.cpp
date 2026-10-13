#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int len = nums.size();
        vector<int> result;
        if (k>len)
        {
            k = k%len;
        }
        
        for (int i=len-k ; i<len ; i++)
        {
            result.push_back(nums[i]);
        }

        for (int i=0 ; i<len-k ; i++)
        {
            result.push_back(nums[i]);
        }

        for (int i=0 ; i<len ; i++)
        {
            nums[i] = result[i];
        }
    }
};

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter vector elements: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"Enter number to be rotated by: ";
    cin>>k;

    Solution alter;
    alter.rotate(nums, k);

    cout<<"Result: ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//run using: 
//g++ rotate.cpp -o rotate
//./rotate