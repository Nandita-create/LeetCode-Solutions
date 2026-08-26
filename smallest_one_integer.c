/*Given a positive integer k, you need to find the length 
of the smallest positive integer n such that n is divisible by k, 
and n only contains the digit 1.
Return the length of n. If there is no such n, return -1.

Note: n may not fit in a 64-bit signed integer.*/

//Suitable for larger numbers too by excluding int n as 
//it cannot store big integers

#include <stdio.h>

int smallestRepunitDivByK(int k) {
    int length;
    int remainder=0;
    if (k%2==0 || k%5==0)
    {
        return -1;
    }
    for(length=1 ; length<=k ; length++)
    {
        remainder = ((remainder*10) + 1)%k;
        //not using n at all to store numbers as it will not accomodate
         
        if(remainder==0)
        return length;
    }
    return -1;
}

int main()
{
    int k;
    printf("Enter a number: ");
    scanf("%d" ,&k);

    int result = smallestRepunitDivByK(k);

    printf("Result: %d \n" ,result);
    return 0;
}



/*Suitable for smaller numbers
#include <stdio.h>

int smallestRepunitDivByK(int k) {
    long n = 1;
    int length = 1;
    int remainder;
    if (k%2==0 || k%5==0)
    {
        return -1;
    }
    while(n%k!=0)
    {
        n = (n*10) + 1;
        length++;
    }
    return length;
}

int main()
{
    int k;
    printf("Enter a number: ");
    scanf("%d" ,&k);

    int result = smallestRepunitDivByK(k);

    printf("Result: %d \n" ,result);
    return 0;
}*/