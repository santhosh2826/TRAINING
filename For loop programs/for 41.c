#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}