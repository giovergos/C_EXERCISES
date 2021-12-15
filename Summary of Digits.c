/* A program that reads a natural number (>0). If this number is negative or zero, the program ends by showing the message "Wrong Input". Else, it calculates the summary of the number's digits.
Then it does the same work for the summary and repeats till the summary becomes single digit. The program shows by an order and seperated by space the number of times that it calculated summaries and the final single digit summary. */

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
