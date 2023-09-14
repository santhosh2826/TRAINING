#include<stdio.h>
void main()
{
    int n1,n2;
    printf("enter the number 1");
    scanf("%d",&n1);
    printf("enter the number 2");
    scanf("%d",&n2);
        if (n1>n2)
        {
            printf("the largest number is %d",n1);
        }
        else{
            printf("the largest number is %d",n2);
        }
}