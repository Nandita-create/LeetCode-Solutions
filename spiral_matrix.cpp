//Spiral Matrix
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        int i=0, j=0;
        int count = 0;
        while(true)
        {
            if (count%4==0)
            {
            readRowForward(matrix, result, i, j, (col-1-j));
            count++;
            if (result.size()>=row*col)
            break;
            }

            if ((count-1)%4==0)
            {
                readColForward(matrix, result, (col-1-i), i+1, (row-1-i));
                count++;
                if (result.size()>=row*col)
                break;
            }

            if ((count+2)%4==0)
            {
                readRowReverse(matrix, result, (row-1-i), (col-2-j), j);
                i++;
                count++;
                if (result.size()>=row*col)
                break;
            }

            if ((count+1)%4==0)
            {
                readColReverse(matrix, result, j, (row-i-1), i);
                j++;
                count++;
                if (result.size()>=row*col)
                break;
            }
        }
        return result;
    }

    void readRowForward(vector<vector<int>> matrix, vector<int>& result, int row, int col1, int col2)
    {
        for (int j=col1 ; j<=col2 ; j++)
        {
            result.push_back(matrix[row][j]);
        }
    }

    void readRowReverse(vector<vector<int>> matrix, vector<int>& result, int row, int col1, int col2)
    {
        for (int j=col1 ; j>=col2 ; j--)
        {
            result.push_back(matrix[row][j]);
        }
    }

    void readColForward(vector<vector<int>> matrix, vector<int>& result, int col, int row1, int row2)
    {
        for (int i=row1 ; i<=row2 ; i++)
        {
            result.push_back(matrix[i][col]);
        }
    }

    void readColReverse(vector<vector<int>> matrix, vector<int>& result, int col, int row1, int row2)
    {
        for (int i=row1 ; i>=row2 ; i--)
        {
            result.push_back(matrix[i][col]);
        }
    }
};

int main() {
	int rows, cols;
	cout<<"Enter number of rows and columns in the matrix: ";
	cin>>rows;
	cin>>cols;
	
	vector<vector<int>> matrix(rows, vector<int>(cols, 0));
	
	cout<<"Enter elements of the matrix: ";
	for (int i=0 ; i<rows ; i++)
	{
	    for (int j=0 ; j<cols ; j++)
	    {
	        cin>>matrix[i][j];
	    }
	}
	
	
	Solution mat;
	vector<int> results = mat.spiralOrder(matrix);
	
	cout<<"Result: ";
	for (int i=0 ; i<results.size() ; i++)
	{
	    cout<<results[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

//run using: 
//g++ spiral_matrix.cpp -o spiral_matrix
//./spiral_matrix