/*Create a file named 'funcs.h' which includes two functions (findPrimes and printArray) to be compiled with main.
The program has to read two integer numbers min and max, and shows the prime numbers which are included in this set [min,max].
Main is already given. Note: You have to use dynamic memory allocation.
#include <stdio.h>
#include "funcs.h"
int main(void)
{
 int min,max;
 int *primes, n;
 scanf ("%d %d",&min,&max);
 primes = findPrimes(min,max,&n);
 printArray(primes,n);
 return 0;
}*/

#include <stdlib.h>

int isPrime(int i)
{
    int j, flag=0;
    if(i<=1)
        flag=1;
    else
    {
        for(j=2;j<=i/2 && flag==0;j++)
        {
            if(i%j==0)
                flag=1;
        }
    }
    return flag;
}

void printArray(int *mat, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n", mat[i]);
    }
}

int* findPrimes(int min, int max, int *n)
{
    int i, p, *arr;
    p=0;
    for(i=min;i<=max;i++)
    {
        if(isPrime(i)==0)
        {
            p++;
            if(p==1)
            {
                arr=(int*)malloc((sizeof(int)));
                arr[p-1]=i;
            }
            else
            {
                arr=(int*)realloc(arr, p*sizeof(int));
                arr[p-1]=i;
            }
        }
    }
    *n=p;
    return arr;
}
