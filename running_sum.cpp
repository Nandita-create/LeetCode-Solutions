/*Given an array nums. 
We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        auto size = nums.end();
        int numsSize = size - nums.begin();  
        //nums.begin() is index 0
        
        int sum=0;
        vector<int> result(numsSize);  
        //vector with size numsSize
        //Syntax: vector<int> result(size, initialising value for all elements)
        //if initialising value is not set, by default sets elements to 0

        for (int i=0 ; i<numsSize ; i++)
        {
            sum = sum+nums[i];
            result[i] = sum;
        }
        return result;
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
    vector<int> results(numsSize);

    Solution running_sum;  //create object of class

    results = running_sum.runningSum(nums);

    for (int i=0 ; i<numsSize ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//run using: 
//g++ running_sum.cpp -o running_sum
//./running_sum