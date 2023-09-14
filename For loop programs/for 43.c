#include<stdio.h>
void main()
{
    int n=123,sum=0;
     int temp=n;
    while(n!=0)
{
    int rem=n%10;
    sum=sum*10+rem;
    n=n/10;
}
printf("%d",sum);
}