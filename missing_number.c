/*Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.*/

//Doing by sum of numbers technique
//Time Complexity = O(n) and Space Complexity (less imp) = O(1)
#include <stdio.h>
#include <stdlib.h>

int missingNumber(int* nums, int numsSize)
{
    int sum = (numsSize*(numsSize+1))/2;
    int sum_element = 0;
    for (int i=0 ; i<numsSize ; i++)
    {
        sum_element = sum_element + nums[i];
    }

    return (sum-sum_element);
}


int main()
{
    int* nums;
    int numsSize;
    printf("Enter length of array: ");
    scanf("%d" ,&numsSize);

    printf("Enter elements of array: \n");
    for (int i=0 ; i<numsSize ; i++)
    {
        scanf("%d" ,&nums[i]);
    }

    printf("Missing number: %d \n" ,missingNumber(nums, numsSize));
    return 0;
}
