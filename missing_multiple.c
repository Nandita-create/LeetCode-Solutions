#include <stdio.h>
#include <stdlib.h>

int missingMultiple(int [], int, int);

int compare(const void *a, const void *b)
{
    int arg1 = *(int *)a;
    int arg2 = *(int *)b;

    return (arg1-arg2);
}

int missingMultiple(int nums[], int size, int k) {
        int value = 0;
        int num = 1;
        int missing_num;
        qsort(nums, size, sizeof(int), compare);

        for (int i=0 ; i<size ; i++)
        {
            if(value==nums[i])
            {
                continue;
            }
            
            value = nums[i];
            if (value%k==0)
            {
                if(value != (k*num))
                {
                    missing_num = k*(num);
                    return missing_num;
                }
                num++;
            }
        }
        missing_num = k*num;
        return missing_num;
    }

int main()
{
    int size;
    int k;
    int *nums;
    printf("Enter size of array: ");
    scanf("%d" ,&size);

    nums = (int *)malloc(size*sizeof(int));

    printf("Enter elements of array: ");
    for (int i=0 ; i<size ; i++)
    {
        scanf("%d" ,&nums[i]);
    }

    printf("Enter number to be divisible by: ");
    scanf("%d" ,&k);

    int missing = missingMultiple(nums, size, k);

    printf("Result: %d \n" ,missing);
    return 0;
}