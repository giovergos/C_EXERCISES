#include <stdio.h>
#include <string.h>

int main() {
  char s1[100], s2[100], i, flag, l1[26], l2[26];
  fgets(s1,100,stdin);
  s1[strcspn(s1,"\n")]='\0';
  fgets(s2,100,stdin);
  s2[strcspn(s2,"\n")]='\0';
  flag=1;
  for (i=0;i<strlen(s1) && flag==1;i++)
    if (s1[i]<'a' || s1[i]>'z')
      flag=0;
  if (flag==0)
    printf("Wrong Input");
  else {
    for (i=0;i<strlen(s2) && flag==1;i++)
      if (s2[i]<'a' || s2[i]>'z')
        flag=0;
    if (flag==0)
      printf("Wrong Input");
    else {
      for (i=0;i<26;i++) {
        l1[i]=0;
        l2[i]=0;
      }
      i=0;
      while (s1[i]!='\0') {
        l1[s1[i]-'a']++;
        i++;
      }
      i=0;
      while (s2[i]!='\0') {
        l2[s2[i]-'a']++;
        i++;
      }
      for (i=0;i<26 && flag==1;i++)
        if (l1[i]!=l2[i])
          flag=0;
      if (flag==0)
        printf("No");
      else
        printf("Yes");
    }
  }
  return 0;
}