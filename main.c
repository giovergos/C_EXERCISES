#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
/*
char *applyMask(char *,char *);

int main()
{
    char *s = malloc (1000*sizeof(char));
    char *mask, *r, *r2;
    int i,n;
    fgets(s,1000,stdin);
    s[strcspn(s,"\n")] = '\0';
    n = strlen(s);
    s=realloc(s,(n+1)*sizeof(char));
    mask = malloc ((n+1)*sizeof(char));
    fgets(mask,n+1,stdin);
    mask[strcspn(mask,"\n")] = '\0';
    for (i=0;i<n;i++)
    if (mask[i]<'0' || mask[i]>'9')
    {
        printf ("Wrong input");
        return 1;
    }
    r= applyMask(s,mask);
    printf ("%s\n",s);
    printf ("%s\n",r);
    return 0;
}
*/
char* applyMask(char* s, char* mask)
{
    char* r=malloc(sizeof(char));
    int i, j, k=0;
    for(i=0;i<strlen(mask);i++)
    {
        for(j=0;j<(int)mask[i]-48;j++)
        {
            r[k]=s[i];
            k++;
            r=realloc(r,k*sizeof(char));
        }
    }
    return r;
}
