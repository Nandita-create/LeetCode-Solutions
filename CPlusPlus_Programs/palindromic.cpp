//this will work only till a certain number that can be accomodated in 'int' or 'long'
#include <iostream>
#include <cmath>

using namespace std;

string largestPalindrome(int, int);
bool palin(int);

    string largestPalindrome(int n, int k) {
       int start = std::pow(10, n-1);
       int end = std::pow(10, n);
       std::string result;
       if (n=0)
       {
        result = "NULL";
        return result;
       }
       for (int i=end ; i>start ; i--)
       {
        if (palin(i)==true)
        {
            if(i%k==0)
            {
                result = std::to_string(i);
                return result;
            }
        }

       }
       result = "NULL";
       return result;
    }

    bool palin(int x)
    {
        long rem, sum=0;
        int num=x;
        while(x>0)
        {
            rem = x%10;
            sum = (sum*10)+rem;
            x = x/10;
        }
        if(num==sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int main()
    {
        int n, k;
        cout<<"Enter number of digits: ";
        cin>>n;

        cout<<"Enter number to be divided by: ";
        cin>>k;

        string str = largestPalindrome(n, k);
        cout<<"Result: "<<str<<endl;
    }
