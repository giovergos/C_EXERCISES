/* A program that reads an integer number (i.e. x), calculates and shows the result (float number) of the following function: f(x)=(x^2-3)/(x-3). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    double fx;
    scanf("%d", &x);
    if (x==3)
        printf ("Infinite");
    else {
        fx = (powl(x,2)-3)/(x-3);
        printf("%.1f", fx);}}
    return 0;
}
