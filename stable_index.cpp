#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> copy;
        
        int index=0;
        //int max = nums[size-1];
        int max, min;

        for (int i=0 ; i<size ; i++)
        {
            copy.push_back(nums[i]);

            int max = maximum(copy, i+1);
            int min = minimum(nums, i);

            if((max-min)<=k)
            {
                return i;
            }
        }
        return -1;
    }

    int maximum(vector<int>& copy, int size)
    {
        int max_num = copy[0];
        for (int i=0 ; i<size ; i++)
        {
            if (copy[i]>max_num)
            {
                max_num = copy[i];
            }
        }
    return max_num;
    }

    int minimum(vector<int>& nums, int index)
    {
        int min_num = nums[index];
        int len = nums.size();
        for (int i=index ; i<len ; i++)
        {
            if (nums[i]<min_num)
            {
                min_num = nums[i];
            }
        }
        return min_num;
    }
};

int main()
{
    int len, k;
    cout<<"Enter length of array: ";
    cin>>len;
    vector<int> nums(len);
    for (int i=0 ; i<len ; i++)
    {
        cin>>nums[i];
    }
    
    cout<<"Enter value of k: ";
    cin>>k;
    
    Solution stable;
    int result = stable.firstStableIndex(nums, k);
    cout<<"Result: "<<result<<endl;
    return 0;
}
//run using: 
//g++ stable_index.cpp -o stable_index
//./stable_index