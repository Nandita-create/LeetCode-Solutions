
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> nums;
        int len = digits.size();
        for (int i=0 ; i<len ; i++)
        {

            if (digits[i]==0)
            continue;

            for (int j=0 ; j<len ; j++)
            {
                if (j==i)
                continue;

                for (int k=0 ; k<len ; k++)
                {
                    if (i==k || j==k)
                    continue;

                    if (digits[k]%2==0)
                    {
                        int n = (digits[i]*100) + (digits[j]*10) + digits[k];
                        nums.insert(n);
                        //insert is used for inserting in unordered_set
                    }
                }
            }
        }
        
        vector<int> result(nums.begin(), nums.end());
        sort(result.begin(), result.end());
        return result;
    }
};

int main()
{
    int size;
	cout<<"Enter length of vector: ";
	cin>>size;
	
	vector<int> digits(size);
    cout<<"Enter "<<size<<" elements: ";
	for (int i=0 ; i<size ; i++)
	{
	    cin>>digits[i];
	}
	
	Solution digit;
	vector<int> results = digit.findEvenNumbers(digits);
    int result_len = results.size();
    for (int i=0 ; i<result_len ; i++)
    {
        cout<<results[i]<<" ";
    }
	cout<<endl;
	return 0;
}
//run using: 
//g++ three_digit2.cpp -o three_digit2
//./three_digit2