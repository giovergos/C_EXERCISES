#include <stdio.h>

int main() {
    int N, A[100], i, k, p, j;
    char c;
    scanf("%d", &N);
    for (i=0;i<N;i++)
        scanf("%d", &A[i]);
    scanf("%c", &c);
    while (c!='q') {
        if (c=='a') {
            scanf("%d", &k);
            A[i]=k;
            i++;
        }
        if (c=='d') {
            scanf("%d", &p);
            for (j=p+1;j<i+1;j++)
                A[j-1]=A[j];
            i--;
        }
        if (c=='i') {
            scanf("%d %d", &k, &p);
            for (j=i;j>p-1;j--)
                A[j+1]=A[j];
            i++;
            A[p]=k;
        }
        scanf("%c", &c);
    }
    for (j=0;j<i;j++)
        printf("%d\n", A[j]);
    return 0;
}