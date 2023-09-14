#include<stdio.h>
void main()
{
int i,d=3,sum=0;
for(i=1;i<=5;i++)
{
    sum=sum+d;
    d=d*2;
}
printf("%d",sum);
}