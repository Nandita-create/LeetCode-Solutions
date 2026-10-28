#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        if (numRows==0)
        return {};

        vector<vector<int>> result(numRows);

        result[0] = {1};
        
        if (numRows>1)
        {
            result[1] = {1, 1};
        }

        for (int i=2 ; i<numRows ; i++)
        {
            vector<int> nums(i+1);
            nums[0] = 1;
            nums[i] = 1;
            for (int j=1 ; j<i ; j++)
            {
                nums[j] = result[i-1][j-1] + result[i-1][j];
            }
            result[i] = nums;
        }
        return result;
    }
};

int main()
{
    int numRows;
    cout<<"Enter number of rows of Pascal Triangle: ";
    cin>>numRows;

    Solution obj;
    vector<vector<int>>result = obj.generate(numRows);

    cout<<"Result: \n";

    for (const auto& row : result) 
    {
        for (int val : row) {
            cout << val << " ";
        }
        cout<<endl;
    }
    return 0;
}

//run using: 
//g++ pascal_triangle.cpp -o pascal_triangle
//./pascal_triangle