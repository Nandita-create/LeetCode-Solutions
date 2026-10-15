#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> copy = nums;
        vector<int> result(nums.size());

        sort(copy.begin(), copy.end());
        map<int, int> m;

        int len = copy.size();
        for (int i=0 ; i<len ; i++)
        {
            if (m.find(copy[i]) == m.end())
            {
                m[copy[i]] = i;
            }
        }

        for (int i=0 ; i<nums.size() ; i++)
        {
            result[i] = m[nums[i]];
        }
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
	
	Solution small;
	vector<int> results = small.smallerNumbersThanCurrent(nums);
	
	cout<<"Result: ";
	for (int i=0 ; i<results.size() ; i++)
	{
	    cout<<results[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

//run using: 
//g++ smaller.cpp -o smaller
//./smaller