/*Kids with Greatest Number of Candy*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int len = candies.size();
        auto max_num = max_element(candies.begin(), candies.end());
        int max = static_cast<int> (*max_num);
        vector<bool> result;
        int num;

        for (int i=0 ; i<len ; i++)
        {
            num = candies[i] + extraCandies;
            result.push_back(num>=max);
        }
        return result;
    }
};

int main()
{
    int size, extraCandies;
    cout<<"Enter length of vector: ";
    cin>>size;

    vector<int> candies(size);
    cout<<"Enter number of extra candies: ";
    cin>>extraCandies;

    Solution candy;
    vector<bool> results = candy.kidsWithCandies(candies, extraCandies);

    cout<<"Results: "<<endl;
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    return 0;
}