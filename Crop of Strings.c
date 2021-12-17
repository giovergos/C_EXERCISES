/* A program that reads an integer number N (1<=N<=100) and then reads N strings (max length 50 characters each one). The program finds the string with the shortest length (Smin) and then limit the others so they will have the same length with Smin. At the end it shows the limited strings with the opposite sequence than the reading one.
Note: consider that the strings don't include whitespace characters. */

#include <stdio.h>
#include <string.h>

int main() {
  int N,i,min,k;
  char s[100][50];
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%s", s[i]);
  min=strlen(s[0]);
  for (i=1;i<N;i++)
    if (strlen(s[i])<min)
      min=strlen(s[i]);
  for (i=0;i<N;i++) {
    s[i][min]='\0';
  }
  for (i=N-1;i>=0;i--) {
    for (k=0;k<min;k++)
      printf("%c", s[i][k]);
    if (i>0)
      printf(" ");
  }
  return 0;
}
