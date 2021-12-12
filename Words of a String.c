#include <stdio.h>
#include <string.h>
#define mr 200
#define mc 200

int main() {
  char s[200],s2[mr][mc],temp[mc];
  fgets(s,200,stdin);
  s[strcspn(s,"\n")]='\0';
  //printf("%s", s);
  int i,row=0,coll=0,j;
  for (i=0;i<strlen(s);i++) {
    if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) {
      s2[row][coll]=s[i];
      coll++;
      if ((s[i+1]<'A' || s[i+1]>'Z') && (s[i+1]<'a' || s[i+1]>'z')) {
        row++;
        coll=0;
      }
      /*if (coll==0) {
        s2[row][coll]=s[i];
      }
      else {
        coll++;
        s2[row][coll]=s[i];
      }
      if ((s[i+1]<'A' || s[i+1]>'Z') && (s[i+1]<'a' || s[i+1]>'z')) {
        row++;
        coll=0;
      }*/
    }
  }
  /*for (i=0;i<row;i++) {
    for (j=0;j<100;j++)
      if (s2[i][j]!=' ') 
       printf("%c", s2[i][j]);
    printf("\n");
  }
  return 0; */
  for (i=0;i<row-1;i++) {
    for (j=0;j<row-i-1;j++) {
      if (strcmp(s2[j],s2[j+1])>0) {
        strcpy(temp,s2[j]);
        strcpy(s2[j],s2[j+1]);
        strcpy(s2[j+1],temp);
      }
    }
  }
  for (i=0;i<row;i++) {
      printf("%s", s2[i]);
    printf("\n");
  }
  return 0;
}