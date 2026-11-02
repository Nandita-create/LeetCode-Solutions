// Find Smallest Letter Greater Than Target
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int value = (int)target;
        int len = letters.size();
        int i=0;
        while(i<len)
        {
            if (value<(int)letters[i])
            return letters[i];

            i++;
        }
        return letters[0];
    }
};

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<char> letters(n);
    
    cout<<"Enter elements of array: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>letters[i];
    }
    
    sort(letters.begin(), letters.end());
    
    char target;
    cout<<"Enter target: ";
    cin>>target;
    
    Solution sol;
    char letter = sol.nextGreatestLetter(letters, target);
    
    cout<<"Result: "<<letter<<endl;
    
    return 0;
}

//run using: 
//g++ letter.cpp -o letter
//./letter