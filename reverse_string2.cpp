/*Given a string s and an integer k, 
reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. 
If there are less than 2k but greater than or equal to k characters, 
then reverse the first k characters and leave the other as original.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//C++ has inbuilt reverse function for string in <algorithm> library
class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        if (len==1)
        return s;

        for (int i=0 ; i<len ; i=(i+2*k))
        {
            reverse(s.begin()+i, s.begin()+min((i+k), len));
            //min checks if it is last few values of string < (2*k), if so reverses entire last part
        }
        return s;
    }
};

int main()
{
    string str;
    int k;
    cout<<"Enter a string: ";
    getline(cin, str);

    cout<<"Enter value of k: ";
    cin>>k;

    Solution reverse;
    string result = reverse.reverseStr(str, k);
    cout<<"Result: "<<result<<endl;
    return 0;
}
//run using: 
//g++ reverse_string2.cpp -o reverse_string2
//./reverse_string2