#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int rno=10,r;
    char name[20]="abcd",n[20];
    float per=70.00,p;
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(0);
    }
    fprintf(fp,"%d\t%s\t%f",rno,name,per);
    fp=fopen("student.txt","r");
    fscanf(fp"%d\t%s\t%f",&r,n,&p);
    printf("Roll no is %d",r);
    printf("Name %s",n);
    printf("Percentage %f",p);
    fclose(fp);
}