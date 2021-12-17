/* A program that reads a string. The reading stops when the string has 100 character or the new line character. Then it shows the character with the highest frequency in the string.
If there are more than one characters with the same highest frequency, the program shows the character with the lowest position in ASCII table. */

#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  fgets(s,100,stdin);
  s[strcspn(s,"\n")]='\0';
  char t[strlen(s)], k, j, i, flag;
  j=0;
  for (i=0;i<strlen(s)+1;i++) {
    flag=1;
    for (k=0;k<j && flag==1;k++)
      if (s[i]==t[k])
        flag=0;
    if (flag==1) {
      t[j]=s[i];
      j++;
    }
  }
  char p[strlen(t)], max, maxchar;
  for (i=0;i<strlen(t)+1;i++)
    p[i]=0;
  for (k=0;k<strlen(t)+1;k++) {
    for (i=0;i<strlen(s)+1;i++) {
      if (s[i]==t[k])
        p[k]++;
    }
  }
  max=p[0];
  maxchar=t[0];
  for (i=1;i<strlen(t)+1;i++) {
    if (p[i]>max) {
      max=p[i];
      maxchar=t[i];
    }
    else if (p[i]==max) {
      if (t[i]<maxchar)
        maxchar=t[i];
    }
  }
  printf("%c", maxchar);
  return 0;
}
