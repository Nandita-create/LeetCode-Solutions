/*Given an array nums of integers, return how many of them 
contain an even number of digits.*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        string n;
        int len;

        for (int i = 0; i < size; i++)
        {
            n = to_string(nums[i]);
            len = n.length();

            if (len % 2 == 0)
                count++;
        }

        return count;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = obj.findNumbers(nums);

    cout << "Count of numbers with even number of digits: " << result << endl;

    return 0;
}
//run using: 
//g++ even_digits.cpp -o even_digits
//./even_digits