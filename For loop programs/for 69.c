#include<stdio.h>
int n;
void main()
{ 
    int v;
    printf("enter the number");
    scanf("%d",&n);
    v=isadd(n);
    printf("%d",v);
}
    int isadd(int x)
{
    int sum=0,r;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    return(sum);
}
