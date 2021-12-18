#include <stdio.h>
#include <math.h>

int main(void) {
  int n,pshfia,sum,arxikos,pshfia2;
  scanf("%d", &n);
  if (n<=0) {
    printf("Wrong Input");
    return 1;
  }
  else {
    arxikos=n;
    pshfia=log10(n);
    pshfia2=pshfia+1;
    sum=0;
    while (n>0) {
      sum+=pow((n/(int)pow(10,pshfia)),pshfia2);
      n%=(int)pow(10,pshfia);
      pshfia--;
    }
    if (sum==arxikos)
      printf("yes");
    else
      printf("no");
  }
  return 0;
}