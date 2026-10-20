#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        int len = s.length();
        int result = 0;
        for (int i=0 ; i<len ; i++)
        {
            if (s[i]=='I')
            {
                if (i!=len-1 && s[i+1]=='V')
                {
                    result += 4; 
                    i++;
                }

                else if (i!=len-1 && s[i+1]=='X')
                {
                    result += 9; 
                    i++;
                }

                else
                result += 1;
            }

            else if (s[i]=='V')
            result += 5;

            else if (s[i]=='X')
            {
                if (i!=len-1 && s[i+1]=='L')
                {
                    result += 40; 
                    i++;
                }

                else if (i!=len-1 && s[i+1]=='C')
                {
                    result += 90; 
                    i++;
                }

                else
                result += 10;
            }

            else if (s[i]=='L')
            result += 50;

            else if (s[i]=='C')
            {
                if (i!=len-1 && s[i+1]=='D')
                {
                    result += 400; 
                    i++;
                }

                else if (i!=len-1 && s[i+1]=='M')
                {
                    result += 900; 
                    i++;
                }

                else
                result += 100;
            }

            else if (s[i]=='D')
            result += 500;

            else
            result += 1000;
        }
        return result;
    }
};

int main() {
	string s;
	cout<<"Enter the Roman Number: ";
	cin>>s;
	
	Solution convert;
	int num = convert.romanToInt(s);
	
	cout<<"Result: "<<num<<endl;
	return 0;
}