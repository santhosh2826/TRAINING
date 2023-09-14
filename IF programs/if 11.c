#include<stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<0)
    {
        printf("negative");
    }
    else if(n>0)
    {
        printf("positive");
    }
    else 
    {
        printf("zero");
    }

}