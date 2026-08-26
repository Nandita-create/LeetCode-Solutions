#include <iostream>
#include <vector>
#include <algorithm>  //for std::sort
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        auto size = nums.end();
        int numsSize = size - nums.begin();

        for (int i=0 ; i<numsSize ; i++)
        {
            nums[i] = nums[i]*nums[i];
        }

        std::sort(nums.begin(), nums.end());  //used to sort array nums

        return nums;
    }
};

int main()
{
    int numsSize;
    cout<<"Enter length of array: ";
    cin>>numsSize;

    vector<int> nums(numsSize);

    cout<<"Enter "<<numsSize<<" elements of the array: ";
    for (int i=0 ; i<numsSize ; i++)
    {
        cin>>nums[i];
    }

    Solution square_array;

    vector<int> result(numsSize);
    result = square_array.sortedSquares(nums);

    cout<<"Result: ";
    for (int i=0 ; i<numsSize ; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//run using: 
//g++ squares_array.cpp -o squares_array
//./squares_array