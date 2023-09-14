#include<stdio.h>
void main()
{
    int n=4,i,k=0;
    for(i=1;i<=n;i++)
    {
        for( int j=1;j<=n-i;j++)
        {
        printf(" ");
        }
        
    for(k=1;k<=(1*1*i);k++)
    {
        
        printf(" %d",i);
    }
    printf("\n");
    }
}