#include<stdio.h>
void main()
{
    int i,j,m;
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            m=i*j;
            printf("%dx%d=%d\n",i,j,m);
        }
    }
}