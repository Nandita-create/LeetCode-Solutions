//Longest Strictly Increasing or Strictly Decreasing Subarray
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        vector<int> length;
        int len = nums.size();
        int increase=0, decrease=0;
        
        for (int i=0 ; i<len ; i++)
        {
            int first = i;
            for (int j=first+1 ; j<len ; j++)
            {
                if (nums[first]<nums[j] && decrease==0)
                increase++;

                else if (nums[first]>nums[j] && increase==0)
                decrease++;

                else if (nums[first]<nums[j])
                break;

                else if (nums[first]>=nums[j] && first!=j)
                break;

                first=j;
            }
            if (increase==0 && decrease==0)
            length.push_back(1);

            else if (increase==0)
            length.push_back(decrease+1);

            else
            length.push_back(increase+1);

            increase=decrease=0;
        }
        int result = *max_element(length.begin(), length.end());

        return result;
    }
};

int main() {
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    
    vector<int> nums(n);
    
    cout<<"Enter elements of the vector: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }
    
    Solution max;
    int results = max.longestMonotonicSubarray(nums);
    
    cout<<"Maximum length of Subarray is: "<<results<<endl;
    
    return 0;
}

//run using: 
//g++ longest_subarray.cpp -o longest_subarray
//./longest_subarray