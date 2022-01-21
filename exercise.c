#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s;
  s=malloc(50*sizeof(char));
  int i, j, N, k;
  scanf("%d", &N);
  for(i=0;i<N;i++)
  {
    scanf("%d ", &k);
    fgets(s, 21, stdin);
    s[strcspn(s, "\n")]='\0';
    if(strlen(s)==k)
      printf("%s\n", s);
    else if(strlen(s)>k)
    {
      for(j=0;j<k;j++)
        printf("%c", s[j]);
      printf("\n");
    }
    else
    {
      for(j=strlen(s);j<k;j++)
        s[j]='*';
      printf("%s\n", s);
    }
  }
  return 0;
}