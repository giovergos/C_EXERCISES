/* A program that reads a non negative integer number N (0<=N<=100) and then reads N integer numbers that they will be saved in an array A. Then the program reads characters and stops when the user gives 'q' as an input. If the character is:
'a', it reads an integer number k and add it at the end of A
'd', it reads an integer number p and deletes from the array the integer at the p position
'i', it reads two integer numbers k and p, and adds the k number in the p position of the array
When the user gives 'q', the program shows the edited array and ends (array must be shown with one element per line). */

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
