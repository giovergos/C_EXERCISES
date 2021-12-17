/* A program that reads an integer number dec and if dec is on limits (0<=dec<=65535) the program shows dec's binary representation using the least number of bits (there are no zeros in front of the number).
If dec is off limits the program shows "Wrong Input" and ends. */

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
