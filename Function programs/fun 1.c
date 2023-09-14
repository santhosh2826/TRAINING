#include<stdio.h>
void main()
{
    int y=5,x=5,z;
    z=add(y,x);
    printf("%d",z);
}
int add(int a,int b)
{

    int c=a+b;
    return(c);
}