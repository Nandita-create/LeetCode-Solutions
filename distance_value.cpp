//Find the Distance Value Between Two Arrays
#include <iostream>
#include <vector>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int len1 = arr1.size();
        int len2 = arr2.size();
        int i, j;
        int count=0;

        for (i=0 ; i<len1 ; i++)
        {
            for (j=0 ; j<len2 ; j++)
            {
                if (abs(arr1[i]-arr2[j])<=d)
                break;
            }
            if (j==len2)
            count++;
        }
        return count;
    }
};

int main() {
	int size1, size2;
	cout<<"Enter size of array 1: ";
	cin>>size1;
	
	vector<int> arr1(size1);
	cout<<"Enter elements of array 1: ";
	for (int i=0 ; i<size1 ; i++)
	{
	    cin>>arr1[i];
	}
	
	cout<<"Enter size of array 2: ";
	cin>>size2;
	
	vector<int> arr2(size2);
	cout<<"Enter elements of array 2: ";
	for (int i=0 ; i<size2 ; i++)
	{
	    cin>>arr2[i];
	}
	
	int d;
	cout<<"Enter value of difference d: ";
	cin>>d;
	
	Solution sol;
	int result = sol.findTheDistanceValue(arr1, arr2, d);
	
	cout<<"Result: "<<result<<endl;

	return 0;
}

//run using: 
//g++ distance_value.cpp -o distance_value
//./distance_value