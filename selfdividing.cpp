/**A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 
128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, 
return a list of all the self-dividing numbers in 
the range [left, right] (both inclusive).
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <iostream>
#include <algorithm>
using namespace std;

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result = nullptr;
    int index = 0;
    int digit, temp, count;
    for(int i=left ; i<=right ; i++)
    {
        //num=i;
        count=0;
        temp=i;
        while(temp!=0)
        {
            digit = temp%10;
            if (digit==0 || i%digit!=0)
            {
                count=1;
                break;
            } 
            temp=temp/10;
        }
        if(count==0)
        {
            int* result2 = new int[index+1];
            if(result!=nullptr)
            {
                copy(result, result+index, result2);
                //copying old array elements to new array with more memory space

                delete[] result;
            }

            result2[index] = i;
            result = result2;
            index++;
        }
    }
    *returnSize = index;
    return result;
}

int main()
{
    int left, right, returnSize;
    cout<<"Enter left: ";
    cin>>left;

    cout<<"Enter right: ";
    cin>>right;

    int* results = selfDividingNumbers(left, right, &returnSize);
    cout<<"Result: "<<endl;
    for (int i=0 ; i<returnSize ; i++)
    {
        cout<<(results[i])<<" ";
    }
    cout<<endl;
    delete[] results;
    return 0;
}

//use 'g++ selfdividing.cpp -o selfdividing && ./selfdividing' to run