/* N is the quantity of a soda's cans. Every can "i" has capacity Bi ml and includes Ai ml (Ai<=Bi). A program that reads an integer number N (2<=N<=100 000) and then N integer numbers Ai (0<=Ai<=10^9) and N integer numbers Bi (0<=Bi<=10^9) and shows:
"Wrong Input" if one of the values is off limits
"Yes" if the quantity of the soda is less (or equal) than the capacity of two random cans
"No" if the quantity of the soda is more than every capacity of a couple of cans */

#include <stdio.h>
#include <math.h>
#define max 100000

int main() {
  int N, i, A[max], B[max];
  scanf("%d", &N);
  if (N<2 || N>100000)
    printf("Wrong Input");
  else {
    for (i=0;i<N;i++) {
      scanf("%d", &A[i]);
      if ((A[i]<0 || A[i]>pow(10,9))) {
        printf("Wrong Input");
        return 1;
      }
    }
    for (i=0;i<N;i++) {
      scanf("%d", &B[i]);
      if ((B[i]<0 || B[i]>pow(10,9)) || (B[i]<A[i])) {
        printf("Wrong Input");
        return 1;
      }
    }
    int sum=0, k, flag=0;
    for (i=0;i<N;i++)
      sum+=A[i];
    for (i=0;i<N-1 && flag==0;i++) {
      for (k=i+1;k<N && flag==0;k++) {
        if (B[i]+B[k]>=sum)
          flag=1;
      }
    }
    if (flag==0)
      printf("No");
    else
      printf("Yes");
  }
  return 0;
}
