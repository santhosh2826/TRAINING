#include<stdio.h>
void main()
{
    int n=15,r,j=0,a[10];
    while(n!=0)
{
    a[j]=n%8;
    j++;
    n=n/8;
}
for(int i=j-1;i>=0;i--)
{
    printf("%d",a[i]);
}
}