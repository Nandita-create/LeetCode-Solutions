#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> result;
        int sum1 = 0;
        int sum2 = 0;
        int len = nums.size();
        for (int i=0 ; i<len ; i++)
        {
            sum1 += i+1;
            if (i!=len-1 && nums[i]==nums[i+1])
            {
                result.push_back(nums[i]);
                continue;
            }
            sum2 += nums[i];
        }
        result.push_back(sum1-sum2);

        return result;
    }
};

int main() {
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	vector<int> nums(n);
	cout<<"Enter array elements: ";
	for (int i=0 ; i<n ; i++)
	{
	    cin>>nums[i];
	}
	
	Solution error;
	vector<int> results = error.findErrorNums(nums);
	
	cout<<"Result: ";
	for (int i=0 ; i<2 ; i++)
	{
	    cout<<results[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}