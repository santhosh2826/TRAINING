#include<stdio.h>
void main()
{
    int i,n,s;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<10;i++)
    {
        s=n*i;
        printf("%d*%d=%d",n,i,s);
    }
}