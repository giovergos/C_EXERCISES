#include <stdio.h>

int main() {
 unsigned int x;
 scanf("%u", &x);
 switch (x) {
  case 1:
    printf("31");
    break;
  case 3:
    printf("31");
     break;
  case 5:
    printf("31");
     break;
  case 7:
    printf("31");
     break;
  case 8:
    printf("31");
     break;
  case 10:
    printf("31");
     break;
  case 12:
    printf("31");
     break;
  case 4:
    printf("30");
     break;
  case 6:
    printf("30");
     break;
  case 9:
    printf("30");
     break;
  case 11:
    printf("30");
     break;
  case 2:
    printf("28 or 29 in leap years");
    break;
  }
  return 0;
}