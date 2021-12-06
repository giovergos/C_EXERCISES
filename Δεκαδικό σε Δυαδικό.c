#include <stdio.h>

int main(void) {
  long int dec, sum=0, x=1, r;
  scanf("%ld", &dec);
  if (dec<0 || dec>65535)
    printf("Wrong Input");
  else {
    while (dec) {
      r=dec%2;
      dec/=2;
      sum+=(r*x);
      x*=10;
    }
    printf("%ld", sum);
  }
  return 0;
}