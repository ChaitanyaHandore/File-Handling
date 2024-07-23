#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("file not exists");
        exit(0);

    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);

    }
    fclose(fp);
}