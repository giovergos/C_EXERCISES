/* A program that reads a string (max length 100 characters) and founds the character which appears the most consecutive times in the string. (Calculate the consecutive times not the total)
The program shows the number of character's appearances with the most consecutive times appear, and the same character.
In the case that there are more than one characters with the max consecutive appearances, the program shows the character that appears first. */

#include <stdio.h>
#include <string.h>

int main() {
  char s[100],maxon;
  fgets(s,100,stdin);
  s[strcspn(s,"\n")]='\0';
  int i,k,pl,max;
  for (i=0;i<strlen(s)+1;i++) {
    if (i==0 /*&& s[i]!=' '*/) {
      k=1;
      pl=1;
      max=pl;
      maxon=s[i];
    }
    else if (/*s[i]!=' ' && */s[i]==s[i-1])
      pl++;
    else {
      if (pl>max) {
        max=pl;
        maxon=s[i-1];
      }
      pl=0;
        pl++;
    }
  }
  printf("%d %c", max, maxon);
  return 0;
}
