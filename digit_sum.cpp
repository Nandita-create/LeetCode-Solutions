//Calculate Digit Sum of a String
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        
        int len = s.size();
        while (len>k)
        {
            string group = "";
            int i=0, sum=0;
            for (i=0 ; i<len ; i++)
            {
                if (i!=0 && i%k==0)
                {
                    group += to_string(sum);
                    sum=0;
                }
                
                sum += (s[i] - '0');
            }
            group += to_string(sum);

            s = group;
            len = s.size();
        }
        return s;
    }
};

int main() {
	string s;
	int k;
	cout<<"Enter string of numbers: ";
	cin>>s;
	
	cout<<"Enter number of values in a group: ";
	cin>>k;
	
	Solution group;
	string result = group.digitSum(s, k);
	
	cout<<"Result: "<<result<<endl;
	
	return 0;
}

//run using: 
//g++ digit_sum.cpp -o digit_sum
//./digit_sum