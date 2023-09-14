#include<stdio.h>
void main()
{
    int n,i,c,j;
    for(i=1;i<=100;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("%d",i);
    }
    }
}