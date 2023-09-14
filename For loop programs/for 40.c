#include<stdio.h>
void main()
{
    int i,a=0,b=1,c;
    for(i=1;i<10;i++)
    {

        printf("%d",a);
         c=a+b;
        a=b;
        b=c;
       
    }
}