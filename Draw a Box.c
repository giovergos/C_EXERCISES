#include<stdio.h>

int main(void){
  int N, w, i, k;
  scanf("%d %d", &N, &w);
  if ((N<2 || N>13) || w<1)
    printf("Wrong Input");
  else if (2*w>N)
    printf("Wrong Input");
  else
    for (i=1;i<=N;i++) {
      if (i>w && i<=(N-w)) {
        for (k=1;k<=w;k++) {
          printf("*");
        }
        for (k=w+1;k<=N-w;k++)
          printf(" ");
        for (k=1;k<=w;k++)
          printf("*");
      }
      else {
        for (k=1;k<=N;k++)
          printf("*");
      }
    printf("\n");
    }
  return 0;
}