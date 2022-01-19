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
