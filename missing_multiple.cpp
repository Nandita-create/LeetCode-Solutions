#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int value = 0;
        int num = 1;
        int missing_num;
        sort(nums.begin(), nums.end());

        for (int i=0 ; i<nums.size() ; i++)
        {
            if(value==nums[i])
            {
                continue;
            }
            
            value = nums[i];
            if (value%k==0)
            {
                if(value != (k*num))
                {
                    missing_num = k*(num);
                    return missing_num;
                }
                num++;
            }
        }
        missing_num = k*num;
        return missing_num;
    }
};

int main()
{
    int size;
    int k;
    cout<<"Enter size of array: ";
    cin>>size;

    vector<int> nums(size);

    cout<<"Enter elements of array: ";
    for (int i=0 ; i<size ; i++)
    {
        cin>>nums[i];
    }

    cout<<"Enter number to be divisible by: ";
    cin>>k;

    Solution missing_multiple;
    int missing = missing_multiple.missingMultiple(nums, k);

    cout<<"Result: "<<missing<<endl;
    return 0;
}
//run using: 
//g++ missing_multiple.cpp -o missing_multiple
//./missing_multiple