/*A sequence of numbers is called an arithmetic progression 
if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be 
rearranged to form an arithmetic progression. Otherwise, return false.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int i, key, j;

    //sorting array with insertion sort
    for (i=1 ; i<arrSize ; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    int diff = arr[1] - arr[0];
    for (i=1 ; i<arrSize-1 ; i++)
    {
        if (diff != (arr[i+1]-arr[i]))
        {
            return false;
            break;
        }
    }
        return true;
}

int main()
{
    int* arr;
    int arrSize;
    printf("Enter length of array: ");
    scanf("%d" ,&arrSize);

    arr = (int *)malloc(arrSize*sizeof(int));

    printf("Enter elements: \n");
    for (int i=0 ; i<arrSize ; i++)
    {
        scanf("%d" ,&arr[i]);
    }

    if (canMakeArithmeticProgression(arr, arrSize)==1)
    printf("true \n");

    else
    printf("false \n");

    free(arr);
    return 0;
}