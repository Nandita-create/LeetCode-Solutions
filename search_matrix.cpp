//Search a 2D Matrix
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int element;

        int i;
        int low=0, high=row-1;

        while(low<=high)
        {
            i = (low+high)/2;
            element = matrix[i][0];

            if (target==element)
            return true;

            else if (target<element)
            high = i-1;

            else
            low = i+1;
        }

        if (high<0)
        return false;

        //high is the index of the column where it could be present
        int min=0, max=col-1;
        int j;
        while(min<=max)
        {
            j = (min+max)/2;
            element = matrix[high][j];

            if (target==element)
            return true;

            else if (target<element)
            max = j-1;

            else
            min = j+1;
        }

        return false;
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
	
	int target;
	cout<<"Enter element to be searched: ";
	cin>>target;
	
	Solution find;
	bool result = find.searchMatrix(matrix, target);
	
	if (result==1)
	cout<<"Element Found"<<endl;
	
	else
	cout<<"Element Not Found"<<endl;
	
	return 0;
}

//run using: 
//g++ search_matrix.cpp -o search_matrix
//./search_matrix