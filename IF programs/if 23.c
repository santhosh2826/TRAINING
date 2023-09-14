#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    int avg,per;
    printf("enter the marks one bye one ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    avg=m1+m2+m3+m4+m5/500;
    per=avg*100;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80){
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade c");
    }
    else if (per>=60)
    {
        printf("Grade  D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}