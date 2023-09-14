#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("enter the three angle");
    {
    scanf("%d%d%d",&a1,&a2,&a3);
    }
    if((a1==a2)||(a2==a3))
    {
        printf("Equlaterial traingle");
    }
    else if((a1==a2)||(a1==a3))
    {
        printf("isocelous traingle");
    }
    else{
        printf("scalane taringle");
    }

}