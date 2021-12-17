/* A program that reads two natural numbers A and Z. It calls a recursional function which counts and returns the number of different binary numbers that can be made with A aces and Z zeros.
In case that at least one of the two numbers is negative, the program ends and shows "Wrong Input". */

#include <stdio.h>

int foo(int A, int Z, int x) {
  if (A==0 && Z==0)
    return 1;
  if (A>0 && Z==0) {
    x=x*10+1;
    A--;
    return foo(A,Z,x); }
  if (Z>0 && A==0) {
    x*=10;
    Z--; 
    return foo(A,Z,x);}
  return foo(A-1,Z,x*10+1)+foo(A,Z-1,x);
}

int main() {
  int A,Z,x;
  scanf("%d %d", &A, &Z);
  if (A<0 || Z<0)
    printf("Wrong Input");
  else {
    x=0;
    printf("%d", foo(A,Z,x)); }
  return 0;
}
