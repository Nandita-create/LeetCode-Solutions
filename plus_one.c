/*You are given a large integer represented as an integer array digits,
where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order. 
The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i=digitsSize-1 ; i>=0 ; i--)
    {
        if (digits[i]<9)
        {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }

        digits[i]=0;
        continue;
    }
    *returnSize = digitsSize+1;
    int *result = (int*)calloc(*returnSize, sizeof(int));  
    //assigns 0 to all elements
    result[0] = 1;
    return result;
}

int main()
{
    int *digits, digitsSize, returnSize;
    printf("Enter length of array: ");
    scanf("%d" ,&digitsSize);

    digits = (int *)malloc(digitsSize*sizeof(int));

    printf("Enter %d elements: \n" ,digitsSize);
    for (int i=0 ; i<digitsSize ; i++)
    {
        scanf("%d" ,&digits[i]);
    }

    int *result = plusOne(digits, digitsSize, &returnSize);

    for (int i=0 ; i<returnSize ; i++)
    {
        printf("%d " ,result[i]);
    }
    return 0;
}