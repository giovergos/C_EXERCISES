#include <stdio.h>

int main(void) {
  int y;
  scanf("%d", &y);
  if (y<=0) {
    printf("Wrong Input");
  }
  else if (y%100==0) {
    if (y%400==0) {
      printf("Leap");
    }
    else
      printf("Normal");
  }
  else if (y%4==0)
    printf("Leap");
  else
    printf("Normal");
  return 0;
}