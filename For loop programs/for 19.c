#include<stdio.h>
void main()
{
    int i;
    for(i=1000;i<=2023;i++)
    {
        if(i%4==0 && i%100!=0)
        {
            printf("%d",i);
        }
    }
}