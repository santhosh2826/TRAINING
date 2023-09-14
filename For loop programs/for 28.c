#include<stdio.h>
void main()
{
    int n,i,j,r,sum=0,s;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i*i;
        sum=sum+s;
    }
    printf("%d",sum);
}