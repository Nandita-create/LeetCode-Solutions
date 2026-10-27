//Create Grid with exactly One Path
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string> grid;
        string row = "";
        for (int i=0 ; i<m ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                if (i==0)
                row.push_back('.');

                else if (j==(n-1))
                row.push_back('.');

                else
                row.push_back('#');
            }
            grid.push_back(row);
            row = "";
        }
        return grid;
    }
};

int main()
{
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;

    cout<<"Enter number of columns: ";
    cin>>n;

    Solution obj;
    vector<string> result = obj.createGrid(m, n);

    cout<<"Result: \n";
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

//run using: 
//g++ one_path.cpp -o one_path
//./one_path