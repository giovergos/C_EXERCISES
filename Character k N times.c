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