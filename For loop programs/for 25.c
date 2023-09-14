#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("enter the prime number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%n==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("prime");
    }
    else{
        printf("not prime");
    }
}