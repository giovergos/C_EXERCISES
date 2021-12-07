#include <stdio.h>

void move(int, int, int, int);
int main(void) {
  int n, x=1, y=2, z=3;
  scanf("%d", &n);
  move(n, x, y, z);
  return 0;
}
void move(n, x, y, z)
  int n,x,y,z; {
    if (n==1)
      printf("Move a disc from %d to %d\n", x, y);
    else {
      move(n-1, x, z, y);
      move(1, x, y, z);
      move(n-1, z, y, x);
    }   
  }