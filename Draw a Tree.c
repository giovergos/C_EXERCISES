/* A program that reads an integer number N (0<N<11) and shows a christmas tree with '*' and spaces. If the integer is off limit the program shows "Wrong Input" and ends. The tree has to be drawn:
The program shows N lines with '*' in total. The first line includes 1 '*', the second 3 '*', the third 5 '*', etc. Before the '*' the program has to shows spaces so every line is centralized to the middle '*'. */

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
