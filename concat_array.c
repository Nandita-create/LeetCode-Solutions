/*Given an integer array nums of length n, 
you want to create an array ans of length 2n where 
ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.
Return the array ans.
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int size = numsSize*2;
    nums = (int*)realloc(nums, size*sizeof(int));
    int index = numsSize;
    for (int i=0 ; i<numsSize ; i++)
    {
        nums[index] = nums[i];
        index++;
    }
    *returnSize = size;
    return nums;
}

int main()
{
    int *nums, numsSize, returnSize;
    printf("Enter size of array: ");
    scanf("%d" ,&numsSize);

    nums = (int *)malloc(numsSize*sizeof(int));

    printf("Enter %d elements: \n" ,numsSize);
    for(int i=0 ; i<numsSize ; i++)
    {
        scanf("%d" ,&nums[i]);
    }

    int *results = getConcatenation(nums, numsSize, &returnSize);

    for(int i=0 ; i<returnSize ; i++)
    {
        printf("%d " ,results[i]);
    }
    printf("\n");
    return 0;
}