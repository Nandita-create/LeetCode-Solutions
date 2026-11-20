#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if (n<=0)
        return false;

        long long power;
        int i=0;
        while(power<=n)
        {
            power = (long long)pow(4, i);
            if (power==n)
            return true;

            i++;
        }
        return false;
    }
};

int main()
{
    int n;
    cout<<"Enter a number to check if it is a power of 4: ";
    cin>>n;

    Solution sol;
    bool result = sol.isPowerOfFour(n);

    if (result==true)
    cout<<n<<" is a Power of 4"<<endl;
    

    else
    cout<<n<<" is not a Power of 4"<<endl;

    return 0;
}