#include <stdio.h>
#include <math.h>

int main() {
  unsigned long x, temp;
  int d;
  scanf("%lu", &x);
  temp =x;
  d =0;
  while (temp>0) {
    d++;
    temp/=10;
  }
  while (d>0) {
    temp =x/(powl(10, d-1));
    if (d!=1)
      printf("%lu ", temp);
    else
      printf("%lu", temp);
    x =x%(int)(powl(10, d-1));
    d-=1;}
  return 0;
}