/* A program that reads two natural numbers (n,s). It shows the number of different combinations n single-digit numbers (zero not included) that their summary equals to s. */

#include <stdio.h>
#include <math.h>

long factorial(int n)
{
    int c;
    long result = 1;
    for (c = 1; c <= n; c++){
      result = result * c;
    }
    return result;
}

int main() {
  int n,s,pl=0,end,f;
  scanf("%d %d", &n, &s);
  if (n>0 && s>0) {
    if (n==1) {
      if (s<=9)
        printf("1");
      else
        printf("0");
    }
    else {
    end=9;
    for (int k=1;k<n;k++)
      end=end*10+9;
    for (int i=pow(10,n-1);i<=end;i++){
      int d=1;
      int k=i;
      while (d==1 && k>0) {
        if (k%10==0)
          d=0;
        else
          k/=10;  
      }
      if (d==1) {
        f=1;
        k=i;
        int x=k%10;
        k/=10;
        while (x>=(k%10)&&k>0) {
          x=k%10;
          k/=10;      
        }
        if (x<(k%10))
          f=0;
      }
      if (f==1) {
      if (d==1) {
        k=i;
        int sum=0;
        while (k>0) {
          sum+=k%10;
          k/=10;
        }
        if (sum==s)
          pl++;
      }
      }
    }
     printf("%d", pl);
    }
  }
  return 0;
}
