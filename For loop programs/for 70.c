#include<stdio.h>
void main()
{ 
    int sum=0,r,x=95;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }

printf("%d",sum);
}