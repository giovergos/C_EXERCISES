/* A program that handles a phone catalogue of a university's DEP members. For every member is needed:
a) the first and second name (string with 30 characters)
b) the rank and the 5-digit phone number
The program reads the number of DEP members (N<50) and then reads the data of N members and shows the catalogue sorted by phone number (in ascending order).
For sorting Bucket Sort algorithm should be used. */

#include <stdio.h>
#include <string.h>

int main() {
  int N,i,BS[100000],j;
  scanf("%d ", &N);
  struct person {
    char name[30];
    char rank;
    int tel;
  };
  struct person DEP[N];
  for (i=0;i<N;i++) {
    struct person temp;
    fgets(temp.name,30,stdin);
    temp.name[strcspn(temp.name,"\n")]='\0';
    scanf("%c ", &temp.rank);
    if (i==N-1)
      scanf("%d", &temp.tel);
    else
      scanf("%d ", &temp.tel);
    DEP[i]=temp;
  }
  for (i=0;i<100000;i++) {
    BS[i]=-1;
  }
  for (i=0;i<N;i++) {
    BS[DEP[i].tel]=i;
  }
  for (j=0;j<100000;j++) {
    if (BS[j]!=-1) {
      i=BS[j];
      printf("%s, %c, %d", DEP[i].name, DEP[i].rank, DEP[i].tel);
      printf("\n");
    }
  }
  return 0;
}
