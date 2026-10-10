/*Maximum Consecutive Ones*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0;
        int max=0;
        int len = nums.size();
        for (int i=0 ; i<len ; i++)
        {
            if (nums[i]==1)
            count++;

            if (nums[i]==0 || i==len-1)
            {
                if (count>max)
                max=count;
                count = 0;
            }
        }

        return max;
    }
};

int main() {
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	vector<int> nums(n);
	
	for (int i=0 ; i<n ; i++)
	{
	    cin>>nums[i];
	}
	
	Solution max;
	int result = max.findMaxConsecutiveOnes(nums);
	
	cout<<"Result: "<<result<<endl;
	return 0;
}

//run using: 
//g++ consecutive.cpp -o consecutive
//./consecutive