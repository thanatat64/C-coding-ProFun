#include <stdio.h>
#include<string.h>
int main()
{
    char str[500]="";
    FILE *fp;
    fp= fopen("text.txt","w");
    do
    {
        gets(str);
        fprintf(fp,"%s\n",str);
    } while (!(strlen(str)==1 && str[0]=='.'));
    fclose (fp);
    return 0;
}