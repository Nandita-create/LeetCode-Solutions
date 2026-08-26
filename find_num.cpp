/*Given a sorted array of distinct integers and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto lower = nums.begin();
        auto upper = nums.end() - 1;
        int lb = lower - nums.begin();
        int ub = upper - nums.begin();
        int mid;
        
        while(lb<=ub)
        {
            mid = lb + (ub-lb)/2;
            if (target==nums[mid])
            return mid;

            else if(target<nums[mid])
               ub = mid-1;

            else
                lb = mid+1;
        }
        
        return lb;
    }
};