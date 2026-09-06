/*You are given a 0-indexed array of distinct integers nums.

There is an element in nums that has the lowest value and an element 
that has the highest value. We call them the minimum and maximum respectively. 
Your goal is to remove both these elements from the array.

A deletion is defined as either removing an element from the front of the array 
or removing an element from the back of the array.

Return the minimum number of deletions it would take to remove both 
the minimum and maximum element from the array.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int size = nums.size();
        if (size==1)
        {
            return 1;
        }

        vector<int> copy;
        copy = nums;
        sort(copy.begin(), copy.end());

        int max = copy[size-1];
        int min = copy[0];
        int max_first, max_end, min_first, min_end;

        for (int i=0 ; i<size ; i++)
        {
            if (nums[i]==max)
            {
                max_first = i+1;
                max_end = size - i;
            }
            else if(nums[i]==min)
            {
                min_first = i+1;
                min_end = size - i;
            }
        }
        vector<int> options;
        int option1 = max_first + min_end;
        options.push_back(option1);

        int option2 = max_end + min_first;
        options.push_back(option2);

        int option3;
        if (min_first>max_first)
        option3 = min_first;

        else
        option3 = max_first;
        options.push_back(option3);

        int option4;
        if (min_end>max_end)
        option4 = min_end;

        else
        option4 = max_end;
        options.push_back(option4);

        sort(options.begin(), options.end());
        int result = options[0];
        return result;
    }
};

int main() {
    int len;
    cout<<"Enter length of array: ";
    cin>>len;
    vector<int> nums(len);
    for (int i=0 ; i<len ; i++)
    {
        cin>>nums[i];
    }
    
    
    Solution removing;
    int results = removing.minimumDeletions(nums);
    cout<<"Result: "<<results<<endl;
    return 0;
}
//run using: 
//g++ removing.cpp -o removing
//./removing