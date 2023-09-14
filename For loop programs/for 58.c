#include<stdio.h>
void main()
{
int i,d=1,sum=0;
for(i=1;i<=8;i++)
{
    sum=sum+d;
    d=d+5;
}
printf("%d",sum);
}