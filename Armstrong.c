/* A program that reads a natural number (integer >0) and shows if the number is Armstrong or not. The program reads an integer N and shows:
1) "Wrong Input" and ends if N<=0
2) "yes" if the number is Armstrong
3) "no" in any other case */

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
