//Time Complexity = O(n^2)
#include <stdio.h>
#include <stdlib.h>

struct Price
{
    int val;
    int index;
};

int maxProfit(int* prices, int pricesSize) {
    struct Price stock[pricesSize];

    for (int i=0 ; i<pricesSize ; i++)
    {
        stock[i].val = prices[i];
        stock[i].index = i;
    }
    
    int profit = 0;
    int j = pricesSize-1;

    for (int i=0 ; i<pricesSize ; i++)
    {
        for(j=pricesSize-1 ; j>=0 ; j--)
        {
        struct Price buy = stock[i];

            int diff = stock[j].val - buy.val;
            if ((buy.val<stock[j].val) && (buy.index<stock[j].index) && (diff>profit))
            {
                struct Price sell = stock[j];
                profit = sell.val - buy.val;
            }
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