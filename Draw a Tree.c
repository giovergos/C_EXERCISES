#include <stdio.h>

int main(void) {
  int N,x=0,y,z,f,v,k;
  scanf("%d", &N);
  if (N>0 && N<11) {
    z=1;
    k=1;
    f=N;
    while (z<=N) 
    {
      y=1;
      while (y<f) 
      {
        printf(" ");
        y++; 
      }
      f--;
      v=0;
      while (v<k)
      { 
        printf("*");
        v++;
      }
      printf("\n");
      k+=2;
      z++;
    }
  }
  else
    printf("Wrong Input");
  return 0;
}