/* A program that reads an integer number N (N>0) and a character k ([a,z]) seperated by a whitespace character. If the integer or the character is off limits the program shows "Wrong Input" and ends.
The program shows N times the character k and at the end a '.'. After five k characters the program lets a space character, unless no other k is going to be shown (so it just puts a '.'). */

#include <stdio.h>

int main(void) {
  int N, x=0, p;
  char k;
  scanf("%d %c", &N, &k);
  if (N<=0 || (k<97 || k>122)) {
    printf("Wrong Input");
    return 0; }
  else {
  p=0;
  while (x<N) {
    printf("%c", k);
    x++;
    p++;
    if (p==5) {
      if (x!=N) {
      printf(" ");
      p=0;
      }
    }
  }
  }
  printf(".");
  return 0;
}
