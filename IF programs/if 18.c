#include<stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==4||n==6||n==9||n==11)
    {
        printf("30 days");
    }
     else if (n==2)
    {
        printf("28 days");
    }
    else{
        printf("31 days");
    }

}