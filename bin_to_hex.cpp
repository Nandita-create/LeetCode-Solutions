#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        int copy = num;
        int rem;
        string hex;
        char ch;
        if (num==0)
        return "0";

        if (num==-2147483648)
        return "80000000";  //as -2147483648 does not have a positive counterpart in 32 bit

        if (num<0)
        {
            num = 2147483648 - abs(num);
        }

        while(num!=0)
        {
            rem = num%16;
            if (rem>=0 && rem<=9)
            {
                ch = (char)rem+48;
            }
            else
            {
                ch = (char)rem+87;
            }
            hex.push_back(ch);
            num = num/16;
        }
        reverse(hex.begin(), hex.end());
        if (copy<0)
        {
            hex[0] = 'f';
        }
        return hex;
    }
};

int main()
{
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;

    Solution hex;

    string result = hex.toHex(num);
    cout<<"Hexadecimal equivalent: "<<result<<endl;
    return 0;
}

//run using: 
//g++ bin_to_hex.cpp -o bin_to_hex
//./bin_to_hex