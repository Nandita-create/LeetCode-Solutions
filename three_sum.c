/*Given an integer array nums, return all the triplets 
[nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

// Comparison function required by qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;
    
    if (numsSize < 3) {
        *returnColumnSizes = NULL;
        return NULL;
    }

    //Sort the array - O(N log N)
    qsort(nums, numsSize, sizeof(int), compare);  //from built-in library

    int capacity = 64;
    int** results = (int**)malloc(capacity * sizeof(int*));
    *returnColumnSizes = (int*)malloc(capacity * sizeof(int));

    // Step 2: Fix the first element and use two pointers for the rest - O(N^2)
    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicate values for the first element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                // Resize result buffers if capacity limit is reached
                if (*returnSize >= capacity) {
                    capacity *= 2;
                    results = (int**)realloc(results, capacity * sizeof(int*));
                    *returnColumnSizes = (int*)realloc(*returnColumnSizes, capacity * sizeof(int));
                }

                // Store the valid triplet
                results[*returnSize] = (int*)malloc(3 * sizeof(int));
                results[*returnSize][0] = nums[i];
                results[*returnSize][1] = nums[left];
                results[*returnSize][2] = nums[right];
                
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                // Skip duplicate values for the left and right pointers
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                // Shift both pointers inward
                left++;
                right--;
            } 
            else if (sum < 0) {
                // Sum is too small, increase the left pointer
                left++;
            } 
            else {
                // Sum is too large, decrease the right pointer
                right--;
            }
        }
    }
    
    return results;
}

int main() {
    int numsSize;

    printf("Enter the number of elements: ");
    if (scanf("%d", &numsSize) != 1 || numsSize <= 0) {
        printf("Invalid input size.\n");
        return 1;
    }

    int* nums = (int*)malloc(numsSize * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize = 0;
    int* returnColumnSizes = NULL;

    // Call your threeSum function
    int** result = threeSum(nums, numsSize, &returnSize, &returnColumnSizes);

    // Display the output
    printf("\nResults: \n");
    printf("Found %d unique triplet(s) that sum to 0:\n", returnSize);

    if (returnSize == 0 || result == NULL) {
        printf("[]\n");
    } else {
        printf("[\n");
        for (int i = 0; i < returnSize; i++) {
            printf("  [%d, %d, %d]\n", result[i][0], result[i][1], result[i][2]);
        }
        printf("]\n");
    }

    // Free all dynamically allocated memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);
    free(nums);

    return 0;
}