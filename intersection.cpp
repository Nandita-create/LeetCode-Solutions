
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> small;
        vector<int> large;
        vector<int> result;
        int len;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        //nums1 = removeDuplicates(nums1);
        //nums2 = removeDuplicates(nums2);

        auto new_end1 = unique(nums1.begin(), nums1.end());
        auto new_end2 = unique(nums2.begin(), nums2.end());

        nums1.erase(new_end1, nums1.end());
        nums2.erase(new_end2, nums2.end());

        if (nums1.size()<nums2.size())
        {
            small = nums1;
            large = nums2;
            len = nums1.size();
        }

        else
        {
            small = nums2;
            large = nums1;
            len = nums2.size();
        }
        
        for (int i=0 ; i<len ; i++)
        {
            if (find(large.begin(), large.end(), small[i]) != large.end())
            result.push_back(small[i]);
        }
        return result;
    }

    /* Using this function to remove duplcates or just use unique()
    vector<int> removeDuplicates(vector<int> nums)
    {
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (i!=nums.size()-1)
            nums.erase(remove(nums.begin()+i+1, nums.end(), nums[i]), nums.end());
        }
        return nums;
    }*/
};

int main()
{
    int n1, n2;
    cout<<"Enter length of 1st array: ";
    cin>>n1;

    vector<int> nums1;
    cout<<"Enter elements of array 1: ";
    for (int i=0 ; i<n1 ; i++)
    {
        cin>>nums1[i];
    }

    cout<<"Enter length of array 2: ";
    cin>>n2;

    vector<int> nums2;
    cout<<"Enter elements of array 2: ";
    for (int i=0 ; i<n2 ; i++)
    {
        cin>>nums2[i];
    }

    Solution obj;

    vector<int> results = obj.intersection(nums1, nums2);

    cout<<"Result: "<<endl;
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }

    cout<<endl;
    return 0;
}

//run using: 
//g++ intersection.cpp -o intersection
//./intersection