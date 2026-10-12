/*Move Zeroes*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int len = nums.size();
        size_t zero = count(nums.begin(), nums.end(), 0);
        
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        
        for (int i=0 ; i<zero ; i++)
        {
            nums.push_back(0);
        }
    }
};

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements of vector: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    Solution zero;

    zero.moveZeroes(nums);
    cout<<"Result: ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//run using: 
//g++ zeroes.cpp -o zeroes
//./zeroes