#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        size_t row = mat.size();
        size_t col = row>0 ? mat[0].size():0;
        int rows = static_cast<int> (row);
        int cols = static_cast<int> (col);

        if ((rows*cols)!=(r*c))
        return mat;

        vector<vector<int>>result(r, vector<int>(c, 0));
        int r_index = 0;
        int c_index = 0;

        for (int i=0 ; i<rows ; i++)
        {
            for (int j=0 ; j<cols ; j++)
            {
                result[r_index][c_index] = mat[i][j];
                if (c_index==c-1)
                {
                    c_index = 0;
                    r_index++;
                }

                else
                c_index++;
            }
        }
        return result;
    }
};

int main() {
	int row, col;
	cout<<"Enter number of rows and columns in matrix: ";
	cin>>row;
	cin>>col;
	
	vector<vector<int>> mat(row, vector<int>(col, 0));
	cout<<"Enter elements of the matrix: ";
	for (int i=0 ; i<row ; i++)
	{
	    for (int j=0 ; j<col ; j++)
	    {
	        cin>>mat[i][j];
	    }
	}
	
	int r, c;
	cout<<"Enter number of rows and columns in the reshaped matrix: ";
	cin>>r;
	cin>>c;
	
	Solution obj;
	vector<vector<int>> results = obj.matrixReshape(mat, r, c);
	
	cout<<"Result: "<<endl;
	for (int i=0 ; i<r ; i++)
	{
	    for (int j=0 ; j<c ; j++)
	    {
	        cout<<results[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}