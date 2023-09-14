#include<stdio.h>
void main(){
    int n=5,i,j,k;
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=1*i-1;k++)
        {
            
            printf(" %d"i);
        }
        printf("\n");
    }
}