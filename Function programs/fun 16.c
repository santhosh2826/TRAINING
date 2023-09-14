#include<stdio.h>
void  main()
{
    int n=12;
    int s=sum(n);
    printf("%d",s);
}
int sum(int n)
{
    int i,sum=0;
    int temp=n;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return(sum);
    
}