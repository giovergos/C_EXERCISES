/* Make a program which reads an integer from the user (e.g. k) and opens a text file named "a.txt". Then it reads as many string as there are in the file (every string has a <1000 length and it can includes spaces).
The program replaces every character of every string, with the one which is k positions next in ASCII table (e.g for "abc" and k=3, the new string is "def"). It shows the new strings, every one on a new line.
Also, it creates a new text file named "o.txt" which indludes all the new strings (every one on a new line). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k, count=0;
    FILE *fp;
    char *s, **arr;
    arr=NULL;
    scanf("%d", &k);
    fp=fopen("a.txt", "r");
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            s=malloc(1000*sizeof(char));
            fgets(s, 1000, fp);
            s[strcspn(s, "\n")]='\0';
            s=realloc(s, (strlen(s)+1)*sizeof(char));
            count++;
            arr=realloc(arr, count*sizeof(char*));
            arr[count-1]=s;
        }
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<strlen(arr[i]);j++)
                arr[i][j]+=k;
            printf("%s\n", arr[i]);
        }
        FILE *fp2;
        fp2=fopen("o.txt", "w");
        if(fp2!=NULL)
            for(int i=0;i<count;i++)
                fprintf(fp2, "%s\n", arr[i]);
        fclose(fp);
        fclose(fp2);
    }
    return 0;
}
