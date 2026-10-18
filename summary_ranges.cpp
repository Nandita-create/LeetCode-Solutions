#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> result;
        string copy;
        sort(nums.begin(), nums.end());
        set<int> s(nums.begin(), nums.end());

        if (s.empty()) return result;

        auto it = s.begin();
        int start = *it;
        int prev = *it;
        ++it;

        for (; it != s.end(); ++it)
        {
            if ((long long)*it == (long long)prev + 1)
            {
                prev = *it;
            }
            else
            {
                if (start == prev)
                    result.push_back(to_string(start));
                else
                    result.push_back(to_string(start) + "->" + to_string(prev));

                start = prev = *it;
            }
        }

        if (start == prev)
            result.push_back(to_string(start));
        else
            result.push_back(to_string(start) + "->" + to_string(prev));

        return result;
    }
};

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter vector elements: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    Solution range;
    vector<string> results = range.summaryRanges(nums);

    cout<<"Results: ";
    for (int i=0 ; i<results.size() ; i++)
    {
        cout<<results[i]<<" ";
    }
    cout<<endl;

    return 0;
}