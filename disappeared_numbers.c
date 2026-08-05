/*Given an array nums of n integers where nums[i] 
is in the range [1, n], return an array of all the integers 
in the range [1, n] that do not appear in nums. */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* findDisappearedNumbers(int*, int, int*);

int absVal(int x) {
    return x < 0 ? -x : x;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    if (numsSize < 1 || numsSize > 100000) {
        *returnSize = 0;
        return NULL;
    }

    // Phase 1: Mark visited numbers by negating values at index abs(val) - 1
    for (int i = 0; i < numsSize; i++) {
        int index = absVal(nums[i]) - 1;
        
        // Ensure index is within valid bounds
        if (index >= 0 && index < numsSize) {
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
    }

    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            result[count] = i + 1;
            count++;
        }
    }

    *returnSize = count;

    if (count > 0) {
        int* temp = (int*)realloc(result, count * sizeof(int));
        if (temp != NULL) {
            result = temp;
        }
        //instead of repeatedly using realloc
    }

    return result;
}

int main()
{
    int* nums;
    int numsSize, returnSize;

    printf("Enter length of array: ");
    scanf("%d" ,&numsSize);

    nums = (int *)malloc(numsSize*sizeof(int));

    printf("Enter elements: \n");
    for (int i=0 ; i<numsSize ; i++)
    {
        scanf("%d" ,&nums[i]);
    }

    int* results = findDisappearedNumbers(nums, numsSize, &returnSize);

    printf("Result: \n");
    for (int i=0 ; i<returnSize ; i++)
    {
        printf("%d ",results[i]);
    }

    free(nums);
    free(results);
    printf("\n");
    return 0;
}

//use 'g++ disappeared_numbers.c -o disappeared_numbers && ./disappeared_numbers' to run