/*Given an integer array nums and an integer k, 
return true if there are two distinct indices i and j 
in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Time Compexity = O(n logn)
typedef struct
{
    int val;
    int index;
}Element;
//structure in C

int compare(const void *a, const void *b)
{
    Element *e1 = (Element *)a;
    Element *e2 = (Element *)b;
    
    if(e1->val != e2->val)  //use -> for pointer
    {
        return (e1->val > e2->val)?1: -1;
    }
    return (e1->index - e2->index);
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    if (numsSize<=1 || k<=0)
    return false;

    Element* arr = (Element *)malloc(numsSize*sizeof(Element));
    for (int i=0 ; i<numsSize ; i++)
    {
        arr[i].val = nums[i];
        arr[i].index = i;
    }

    qsort(arr, numsSize, sizeof(Element), compare);
    //pass arr

    for (int i=0 ; i<numsSize-1 ; i++)
    {
        if ((arr[i].val==arr[i+1].val) && (arr[i+1].index - arr[i].index<=k))
        {
            free(arr);
            return true;
        }
    }
    free(arr);
    return false;
}

int main()
{
    int *nums, numsSize, k;
    printf("Enter length of array: ");
    scanf("%d" ,&numsSize);

    nums = (int *)malloc(numsSize*sizeof(int));

    for (int i=0 ; i<numsSize ; i++)
    {
        printf("Enter element %d: " ,(i+1));
        scanf("%d" ,&nums[i]);
    }

    printf("Enter value of k: ");
    scanf("%d" ,&k);

    int result = containsNearbyDuplicate(nums, numsSize, k);
    if (result==1)
    printf("true \n");

    else
    printf("false");

    return 0;
}

/*Logic Correct but Time Complexity = O(n^2)
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    
    for (int i=0 ; i<numsSize ; i++)
    {
        for (int j=i+1 ; j<numsSize ; j++)
        {
            if (nums[i]==nums[j])
            {
                if (abs(i-j)<=k)
                return true;
            }
        }
    }
    return false;
}*/

/*Logic Correct but Time Complexity = O(n*k)
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int key = k;
    int diff;
    int i=0;
    while(k>=0 && i<numsSize)
    {
        diff = abs(k-i);
        if ((nums[diff]==nums[i]))
        {
            if (diff!=i)
            {
                return true;
            }
        }

        if (k-1<0 && i<=numsSize)
        {
            k = key+1;
            i++;
        }

        k--;
    }
    return false;
}*/