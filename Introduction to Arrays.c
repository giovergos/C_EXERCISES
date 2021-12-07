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