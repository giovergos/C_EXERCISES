#include <stdio.h>
#include <math.h>

int main(void) {
  int x,i,n,sum,d,flag,y;
  scanf("%d", &x);
  if (x<0)
    printf("Wrong Input");
  else {
    char prime=1;
    if (x<2 || (x%2==0 && x!=2))
      prime=0;
    else {
      for (i=3;i<=sqrt(x) && prime==1;i+=2) {
        if (x%i==0)
          prime=0;
      }
    }
    if (prime==0)
      printf("No");
    else {
      flag=1;
      for (i=1;i<x && flag==1;i++) {
        y=i;
        n=(int)log10(y)+1;
        sum=y;
        while (n>0) {
          d=(int)pow(10,n-1);
          sum+=(y/d);
          y=y%d;
          n--;
        }
        if (sum==x) {
          printf("No");
          flag=0;
        }
      }
      if (flag==1)
        printf("Yes");
    }
  }
  return 0;
}