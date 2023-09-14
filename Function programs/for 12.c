#include<stdio.h>
int fib(n)
{
    int a=0,b=1,c;
    for( int i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;b=c;
    }
 }
 void main()
 {
    int n=5;
    fib(n);
 }