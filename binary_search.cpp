//Binary Search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int ub = nums.size() - 1;
        int lb = 0;
        int mid;

        while(ub>=lb)
        {
            mid = (lb+ub)/2;
            if (nums[mid] == target)
            return mid;

            else if (target<nums[mid])
            ub = mid-1;

            else
            lb = mid+1;
        }
        return -1;
    }
};

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    
    cout<<"Enter elements of array: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }
    
    sort(nums.begin(), nums.end());
    
    int target;
    cout<<"Enter value to be searched: ";
    cin>>target;
    
    Solution bin;
    int index = bin.search(nums, target);
    
    if (index!=-1)
        cout<<target<<" found at index "<<index<<endl;
    
    else
        cout<<target<<" not found in array"<<endl;
    
    return 0;
}

//run using: 
//g++ binary_search.cpp -o binary_search
//./binary_search