/* A program that reads integer numbers and shows the result of the following recursion function till the user gives a negative number (and the program stops):
f(x)=	undefined, x<0
	2, x=0
	3, x=1
	2f(x-1)+3f(x-2), x>1 */

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
