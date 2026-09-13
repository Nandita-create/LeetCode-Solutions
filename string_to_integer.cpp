/*Implement the myAtoi(string s) function, which converts a string 
to a 32-bit signed integer.*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int len = s.length();
        int num;
        long long result = 0;
        int ascii;
        int count = 0;
        int sign = 1;
        int plus = 0;

        for (int i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
            ascii = (int)s[i];

            if ((ascii < 48 || ascii > 57) && 
                (s[i] != '-') && (s[i] != ' ') && (s[i] != '+'))
            {
                result *= sign;
                return result;
            }

            if (count != 0 && 
                (s[i] == '-' || s[i] == '+' || s[i] == ' '))
            {
                result *= sign;
                return result;
            }

            if (result == 0 && (plus > 0 || sign == -1) &&
                (s[i] == '-' || s[i] == '+' || s[i] == ' '))
            {
                return 0;
            }

            num = s[i] - '0';

            if (num >= 0 && num <= 9)
            {
                if (sign == 1 &&
                    (result > 214748364 ||
                    (result == 214748364 && num > 7)))
                {
                    return 2147483647;
                }

                else if (sign == -1 &&
                         (result > 214748364 ||
                         (result == 214748364 && num > 8)))
                {
                    return -2147483648;
                }

                else
                {
                    result = (result * 10) + num;
                    count++;
                }
            }

            if (count == 0 && s[i] == '-')
            {
                sign = -1;
            }

            if (count == 0 && s[i] == '+')
            {
                plus++;
            }
        }

        result *= sign;
        return result;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int result = obj.myAtoi(s);

    cout << "Integer: " << result << endl;

    return 0;
}
//run using: 
//g++ string_to_integer.cpp -o string_to_integer
//./string_to_integer