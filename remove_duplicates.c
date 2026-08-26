/*Given an integer array nums sorted in non-decreasing order, 
remove the duplicates in-place such that each unique element 
appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. 
After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. 
The remaining elements beyond index k - 1 can be ignored.*/
#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int *result;
    result = (int *)malloc(numsSize*sizeof(int));
    int resultSize = numsSize;
    int i=0, element, index=resultSize-1, k=0;
    while(i<numsSize)
    {
        element = nums[i];
        result[k] = element;
        k++;
        i++;
        for (int j=i ; j<numsSize ; j++)
        {
            if (nums[j]==element)
            {
                result[index] = element;
                index--;
                i++;
            }
        }
    }
    for (int i=0 ; i<numsSize ; i++)
    {
        nums[i] = result[i];
    }
    free(result);
    return k;
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

    removeDuplicates(nums, numsSize);

    for (int i=0 ; i<numsSize ; i++)
    {
        printf("%d " ,nums[i]);
    }
    printf("\n");

    free(nums);
    return 0;
}