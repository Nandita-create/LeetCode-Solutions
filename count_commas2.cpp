#include <iostream>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        long long comma = 0;
        long long threshold = 1000LL;
        while(n>=threshold)
        {
            comma += (n-threshold+1LL);

            if (threshold > LLONG_MAX/1000LL)  //here LLONG_MAX gives limit of long integers
            break;

            threshold *= 1000LL;  //LL to denote long long better for n<=10^15
        }
        return comma;
    }
};

int main() {
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	Solution count;
	int result = count.countCommas(n);
	
	cout<<"Result: "<<result<<endl;
	return 0;
}
//run using: 
//g++ count_commas2.cpp -o count_commas2
//./count_commas2