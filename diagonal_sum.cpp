#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum=0;
        int n = mat.size();  //here given matrix is a square matrix

        for (int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                if (i!=j && (i+j==n-1))
                sum += mat[i][j];

                else if (i==j)
                sum += mat[i][j];
            }
        }
        return sum;
    }
};

int main()
{
    int n;
    cout<<"Enter number of rows in matirx: ";
    cin>>n;

    vector<vector<int>>mat (n, vector<int>(n));  //square matrix

    cout<<"Enter elements of matrix: ";
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin>>mat[i][j];
        }
    }

    Solution sum;
    int result = sum.diagonalSum(mat);

    cout<<"Sum of diagonals is: "<<result<<endl;

    return 0;
}