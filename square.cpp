#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int len = nums.size();
        int sum = 0;
        for (int i=1 ; i<=len ; i++)
        {
            if (len%i==0)
            {
                sum+=(nums[i-1])*(nums[i-1]);
            }
        }
        return sum;
    }
};

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    Solution square;
    int result = square.sumOfSquares(nums);
    cout<<"Result: "<<result<<endl;
    return 0;
}