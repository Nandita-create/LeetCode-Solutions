/*Write a function that reverses a string. 
The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        auto size = s.end();
        int numsSize = size - s.begin();
        char temp;

        for (int i=0 ; i<(numsSize/2) ; i++)
        {
            temp = s[i];
            s[i] = s[numsSize - 1 - i];
            s[numsSize - 1 - i] = temp;
        }
    }
};

int main()
{
    int strSize;
    cout<<"Enter size of string: ";
    cin>>strSize;

    vector<char> s(strSize);

    cout<<"Enter "<<strSize<<" characters: "<<endl;
    for (int i=0 ; i<strSize ; i++)
    {
        cin>>s[i];
    }

    Solution reverse_str;

    reverse_str.reverseString(s);

    cout<<"Reversed String: "<<endl;
    for (int i=0 ; i<strSize ; i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}