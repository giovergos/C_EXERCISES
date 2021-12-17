/* A program that draws squares using '*' and spaces. It reads two integer numbers:
N, the side of the square (integer number between [2,13]
w, the thickness of the square's walls (inetger number >=1)
The program checks if N and w are not off limits and if a square can be drawn with these values. For example if N is 6 and w is 4, a square can't be drawn beacuse the side is 8 (4+4) which is bigger of the total side of the square (6).
If the values are off limits or a square can't be drawn the program shows "Wrong Input" and ends. Otherwise, it draws the specific square.  */

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
