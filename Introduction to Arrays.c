/* A program that reads an integer number N (0<N<=1000) and then also reads N integer numbers. The program has to shows in two different lines:
a) the average of the numbers (float number with one decimal digit)
b) the absolute average deviation over the average of the numbers (float number with one decimal digit)
The absolute average deviation is the summary of the absolute difference every's number with the average value divided by the number of the digits. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, i, sum;
  float avg, dev, A[1000];
  scanf("%d", &N);
  sum=0;
  for (i=0;i<N;i++) {
    scanf("%f", &A[i]);
    sum+=A[i];
  }
  avg=(float)sum/N;
  dev=0;
  for (i=0;i<N;i++) {
    if (avg-A[i]<0)
      dev+=(avg-A[i])*(-1);
    else
      dev+=(avg-A[i]);
  }
  dev/=N;
  printf("Average is %.1f\nDeviation is %.1f", avg, dev);
  return 0;
}
