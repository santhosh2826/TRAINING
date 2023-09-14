#include<stdio.h>
float area(int l,int b)
{
    int a;
    a=l*b;
    return(a);
}
void main()
{
    int s,l=10,b=5;
     s=area(l,b);
printf("%d",s);
}
