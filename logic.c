#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("logic.txt","w");
    if(fp==NULL)
    {
        printf("file not exist");
        exit(0); 
    }
    while((ch=getchar())!='*')
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("logic.txt","r");
    if(fp==NULL)
    {
        printf("file not exist");
        exit(0);

    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}