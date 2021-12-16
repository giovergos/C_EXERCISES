/* A program that reads a non negative integer number and checks if this number is a Kaprekar (if the square of the number can be splitted in two parts A,B and the summary of these two equals to the number. B has to be >0).
After the reading phase of the N number, shows:
"Wrong Input" if N<0
"Not Kaprekar" if N is not Kaprekar
"A+B=N" if N is a Kaprekar (A,B are the two parts of number's square) */

#include <stdio.h>
#include <math.h>

int main()
{
  int N, A, B, sum, S, n;
  scanf("%d", &N);
  if (N<0)
    printf("Wrong Input");
  else
  {
    S=(int)pow(N, 2);
    A=0;
    B=S;
    sum=A+B;
    n=log10(S);
    while (sum!=N && B>0)
    {
      A=S/(int)pow(10, n);
      B=S%(int)pow(10, n);
      sum=A+B;
      n--;
    }
    if (N==0 || sum!=N)
      printf("Not Kaprekar");
    else
      printf("%d + %d = %d", A, B, N);
  }
  return 0;
}
