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