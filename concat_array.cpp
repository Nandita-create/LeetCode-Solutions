#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        for (int i=0 ; i<size ; i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main()
{
    int numsSize;
    cout<<"Enter length of array: ";
    cin>>numsSize;

    vector<int> nums(numsSize);

    cout<<"Enter "<<numsSize<<" elements: "<<endl;
    for (int i=0 ; i<numsSize ; i++)
    {
        cin>>nums[i];
    }

    vector<int> results(numsSize*2);

    Solution get_concatenation;

    results = get_concatenation.getConcatenation(nums);

    for (int i=0 ; i<numsSize*2 ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//run using: 
//g++ concat_array.cpp -o concat_array
//./concat_array