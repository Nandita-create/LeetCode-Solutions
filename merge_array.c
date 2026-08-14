/*You are given two integer arrays nums1 and nums2, 
sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, 
but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, 
where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int*, int, int, int*, int, int);

int compare(void const *a, void const *b)
{
    int arg1 = *(int *)a;
    int arg2 = *(int *)b;

    return (arg1-arg2);
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int index = 0;

    for (int i=m ; i<nums1Size ; i++)
    {
        nums1[i] = nums2[index];
        index++;
    }

    qsort(nums1, nums1Size, sizeof(int), compare);
}

int main()
{
    int m, n, nums1Size, nums2Size;
    printf("Enter size of 1st array: ");
    scanf("%d" ,&m);
    printf("Enter size of 2nd array: ");
    scanf("%d" ,&n);

    int *nums1 = (int *)malloc(m*sizeof(int));
    int *nums2 = (int *)malloc(n*sizeof(int));

    printf("Enter %d elements of array 1: \n" ,m);
    for (int i=0 ; i<m ; i++)
    {
        scanf("%d" ,&nums1[i]);
    }

    printf("Enter %d elements of array 2: \n" ,n);
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d" ,&nums2[i]);
    }

    nums1Size = m+n;
    nums2Size = n;
    nums1 = (int *)realloc(nums1, nums1Size*sizeof(int));

    for (int i=m ; i<nums1Size ; i++)
    {
        nums1[i] = 0;
    }

    merge(nums1, nums1Size, m, nums2, nums2Size, n);

    for (int i=0 ; i<nums1Size ; i++)
    {
        printf("%d " ,nums1[i]);
    }
    return 0;
}