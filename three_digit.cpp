/*You are given an array of digits called digits. 
Your task is to determine the number of distinct three-digit even numbers 
that can be formed using these digits.

Note: Each copy of a digit can only be used once per number, 
and there may not be leading zeros.*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> nums;  //used to prevent duplicates
        int len = digits.size();
        for (int i=0 ; i<len ; i++)
        {
            if (digits[i]==0)
            continue;
            for (int j=0 ; j<len ; j++)
            {
                if (i==j)  //to check indices only
                continue;

                for (int k=0 ; k<len ; k++)
                {
                    if (k==i || k==j)
                    continue;

                    if (digits[k]%2==0)
                    {
                        int n = (digits[i]*100) + (digits[j]*10) + (digits[k]);
                        nums.insert(n);
                    }
                }
            }
        }
        return nums.size();
    }
};

int main() {
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
	int results = digit.totalNumbers(digits);
	cout<<"Results: "<<results<<endl;
	return 0;
}
//run using: 
//g++ three_digit.cpp -o three_digit
//./three_digit