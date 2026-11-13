//Transpose of Matrix
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int temp;
        vector<vector<int>> result(col, vector<int>(row, 0));
        for (int i=0 ; i<row ; i++)
        {
            for (int j=0 ; j<col ; j++)
            {   
                result[j][i] = matrix[i][j];
            }
        }
        return result;
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
	vector<vector<int>> results = mat.transpose(matrix);
	
	cout<<"Result: ";
	for (int i=0 ; i<cols ; i++)
	{
	    for (int j=0 ; j<rows ; j++)
	    {
	        cout<<results[i][j];
	    }
	}
	cout<<endl;
	
	return 0;
}

//run using: 
//g++ transpose.cpp -o transpose
//./transpose