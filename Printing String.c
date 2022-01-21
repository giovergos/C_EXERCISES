/* A program that allocates memory for a 50-character string, reads an integer N and repeats the following steps N times:
Reads an integer k and reads a string (maximum length 21 characters that can indlude white spaces). Depending on the string's length:
If the length equals to k, the program shows the string and moves the cursor to new line.
If the length is bigger than k, the program shows the first k characters of the string and moves the cursor to new line.
If the length is smaller than k, the program adds at the end of the string stars (*) for the length to be the same with k, it shows the new string and moves the cursor to new line. */

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
