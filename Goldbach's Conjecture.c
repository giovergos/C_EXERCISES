/* A program that reads an integer number N. If N is even and bigger than 2, the program finds the smaller integer number p to: p is a prime number and the number q=N=p is also a prime number (Goldbach's Conjecture). The program shows:
a) if N is even and bigger than 2: p+q=N
b) if N is not even or smaller than/equals to 2: Wrong Input */

#include <stdio.h>

int main(void) {
  long int N,p,q,i,k,prime,flag=0;
  scanf("%ld", &N);
  if (N%2==0 && N>2) {
    for (i=2; i<N && flag==0; i++) {
      prime=1;
      for (k=2; k<i && prime==1; k++) {
        if (i%k==0) {
          prime=0;
        }
      }
      if (prime==1) {
        p=i;
        q=N-p;
        for (k=2; k<q && prime==1; k++) {
          if (q%k==0)
            prime=0;
        }
        if (prime==1)
          flag=1;
      }
    }
    printf("%ld+%ld=%ld", p,q,N);
  }
  else
    printf("Wrong Input");
  return 0;
}
