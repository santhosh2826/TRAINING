#include<stdio.h>
void main()
{
    int n=5,i,k=0;
    for(i=1;i<=n;i++)
    {
        for( int j=1;j<=n;j++)
        {
        printf("");
        }
        
    for(k=1;k<=(2*i-1);k++)
    {
        printf("*");
    }
    printf("\n");
    }
}