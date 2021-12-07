#include <stdio.h>

int f(int x) {
  if (x==0||x==1)
    return x+2;
  return 2*f(x-1)+3*f(x-2);
}

int main() {
  int x;
  scanf("%d", &x);
  while (x>=0) {
    printf("%d\n", f(x));
    scanf("%d", &x);  
  }
  return 0;
}