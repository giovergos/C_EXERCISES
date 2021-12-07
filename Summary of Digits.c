#include <stdio.h>
#include <math.h>

int main(void) {
  int N,n,d,sum,k;
  scanf("%d", &N);
  if (N<=0) {
    printf("Wrong input");
    return 1;
  }
  else {
    k=0;
    while (N>=10) {
      k++;
      n=(int)log10(N)+1;
      sum=0;
      while (n>0) {
        d=(int)pow(10,n-1);
        sum+=(N/d);
        N%=d;
        n--;
      }
      N=sum;
    }
    printf("%d %d", k,N);
  }
  return 0;
}