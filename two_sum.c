/*You are given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.*/

 /**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result;
    for (int i=0 ; i<numsSize ; i++)
    {
        for (int j=i+1 ; j<numsSize ; j++)
        {
            if (nums[i]+nums[j]==target)
            {
                result = (int *)malloc(2*sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; 
}

int main()
{
    int* nums;
    int numsSize;
    printf("Enter length of array: ");
    scanf("%d" ,&numsSize);

    nums = (int *)malloc(numsSize*sizeof(int));

    printf("Enter elements: \n");
    for (int i=0 ; i<numsSize ; i++)
    {
        scanf("%d" ,&nums[i]);
    }

    int* returnSize;
    int target;
    printf("Enter target: ");
    scanf("%d" ,&target);

    twoSum(nums, numsSize, target, returnSize);

    for (int i=0 ; i<numsSize ; i++)
    {
        printf("%d " ,nums[i]);
    }
    printf("\n");

    free(nums);
    return 0;
}