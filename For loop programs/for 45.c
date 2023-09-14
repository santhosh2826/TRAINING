#include<stdio.h>
void main()
{
    int n=5,i;
    for(i=0;i<n;i++)
    {
        for( int j=1;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}