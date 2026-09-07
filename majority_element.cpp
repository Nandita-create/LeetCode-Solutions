/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int count = 0;
        int index = nums[0];
        int max = -1;

        for (int i=0 ; i<size ; i++)
        {
            if (nums[i] == index)
            {
                count++;
            }
            if ((i==size-1 || nums[i+1]!=index) && count>(size/2) && count>max)
            {
                max = nums[i];
                count=0;
                if (i!=size-1)
                {
                    index = nums[i+1];
                }
                continue;
            }
            if (nums[i+1]!=index)
            {
                count=0;
                index = nums[i+1];
            }
        }
        return max;
    }
};

int main() {
    int len;
    cout<<"Enter length of array: ";
    cin>>len;
    vector<int> nums(len);
    cout<<"Enter "<<len<<" elements of array: ";
    for (int i=0 ; i<len ; i++)
    {
        cin>>nums[i];
    }
    
    
    Solution majority;
    int results = majority.majorityElement(nums);
    cout<<"Result: "<<results<<endl;
    return 0;
}
//run using: 
//g++ majority_element.cpp -o majority_element
//./majority_element