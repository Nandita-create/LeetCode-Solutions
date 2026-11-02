#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int len = nums.size();
        vector<int> result(len);
        int lb = 0;
        int ub = len-1;
        
        for (int i=0 ; i<len ; i++)
        {
            if (nums[i]%2==0)
            {
                result[lb] = nums[i];
                lb++;
            }

            else
            {
                result[ub] = nums[i];
                ub--;
            }
        }
        return result;
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

    Solution sol;
    vector<int> results = sol.sortArrayByParity(nums);
    
    cout<<"Result: \n";
    for (int i=0 ; i<n ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//run using: 
//g++ parity_sort.cpp -o parity_sort
//./parity_sort