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
      //if (s[i]!=' ') {
        pl++;
      //}
    }
  }
  printf("%d %c", max, maxon);
  return 0;
}