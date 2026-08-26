#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> result(n);

        if (n==1)
        {
            result[0] = 0;
            return result;
        }

        int mid = n/2;

        for (int i=0 ; i<=mid ; i++)
        {
            if(i == (n-1-i))
            {
                result[i] = 0;
                continue;
            }
            result[i] = i+1;
            result[n-1-i] = -(result[i]);
        }

        return result;
    }
};

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int> result_arr(n);

    Solution sum;

    result_arr = sum.sumZero(n);

    cout<<"Array having "<<n<<" elements and sum equal to 0 is: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<result_arr[i]<<" ";  
        //cannot directly display vector as a whole
        //should be element by element
    }
    cout<<endl;

    return 0;
}
//run using: 
//g++ integer_sum.cpp -o integer_sum
//./integer_sum