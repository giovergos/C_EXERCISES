/* Create the following functions:
chars - receives a string and returns (call by reference) the character with the highest frequency in the string and (again call by reference) the character with the lowest frequency in the string.
In case there are 2 characters that have the same frequency, the one which is left to the other must be chosen.
reverse - receives a string and returns a new string with the content of the first one reversed ("abc"->"cba")
Main program is already given. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chars(char *s, char *most_seen, char *less_seen);
char *reverse (char *s);

int main()
{
    char *s = malloc (1000*sizeof(char));
    char *s2;
    char mostSeen, lessSeen;
    fgets(s,1000,stdin);
    s[strcspn(s,"\n")] = '\0';
    chars(s,&mostSeen, &lessSeen);
    s2 = reverse(s);
    printf("%s\n",s);
    printf("%s\n",s2);
    printf("%c\n%c\n",mostSeen,lessSeen);
    return 0;
}

void chars(char *s, char *most_seen, char *less_seen)
{
    int i, k, j, flag;
    char c[strlen(s)];
    k=0;
    for(i=0;i<strlen(s);i++)
    {
        flag=0;
        for(j=0;j<k&&flag==0;j++)
        {
            if(s[i]==c[j])
                flag=1;
        }
        if(flag==0)
        {
            c[k]=s[i];
            k++;
        }
    }
    int q[k];
    for(i=0;i<k;i++)
        q[i]=0;
    for(i=0;i<strlen(s);i++)
    {
        flag=0;
        for(j=0;j<k&&flag==0;j++)
        {
            if(s[i]==c[j])
            {
                q[j]++;
                flag=1;
            }
        }
    }
    int max, maxp, min, minp;
    max=min=q[0];
    maxp=minp=0;
    for(i=1;i<k;i++)
    {
        if(q[i]>max)
        {
            max=q[i];
            maxp=i;
        }
        if(q[i]<min)
        {
            min=q[i];
            minp=i;
        }
    }
    *most_seen=c[maxp];
    *less_seen=c[minp];
}

char* reverse(char *s)
{
    int i, k;
    char *s2=malloc(strlen(s)*sizeof(char));
    k=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
        s2[k]=s[i];
        k++;
    }
    return s2;
}
