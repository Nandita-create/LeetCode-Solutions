//Time Complexity = O(n)
#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int profit = 0;
    for (int i=1 ; i<pricesSize ; i++)
    {
        if (prices[i]<minPrice)
        minPrice = prices[i];

        else if ((prices[i] - minPrice) > profit)
        {
            profit = prices[i] - minPrice;
        }
    }
    return profit;
    }

int main()
{
    int *arr, arrSize;
    printf("Enter length of array: ");
    scanf("%d" ,&arrSize);

    arr = (int *)malloc(arrSize*sizeof(int));

    printf("Enter %d elements: \n" ,arrSize);

    for (int i=0 ; i<arrSize ; i++)
    {
        scanf("%d" ,&arr[i]);
    }

    int result = maxProfit(arr, arrSize);

    printf("Profit: %d \n" ,result);
    return 0;
}