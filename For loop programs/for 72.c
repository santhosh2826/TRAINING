#include<stdio.h>
void main()
{
    int i,j,a[10]={1,2,3,3,4},b[10],k=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
            a[i] ='\0';
            }
         }
            
        }
    
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}