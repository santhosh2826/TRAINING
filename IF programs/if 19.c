#include<stdio.h>
void main()
{
    int n1,n2,n5,n10,n50,n100,n500,n20,a;
    n500=0;
    n100=0;
    n50=0;
    n20=0;n10=0;
    n1=0;
    printf("enter your amount");
    scanf("%d",&a);
    if(a>=500)
    {
        n500=a/500;
        printf("500 =%d\n",n500);
        a=a%500;
    

      
    }
    if(a>=100)
    {
         n100=a/100;
         printf("100= %d\n",n100);
         a=a%100;
     
    }
    if(a>=50)
    {
        n50=a/50;
        printf("50=%d\n",n50);
        a=a%50;
    }
    if(a>=20)
    {
        n20=a/20;
        printf("20=%d\n",n20);
        a=a%20;
    }
    if(a>=10)
    {
        n10=a/10;
        printf("10=%d\n",n10);
        a=a%10;
    }
    if(a>=1)
    {
        n1=a/1;
        printf("1=%d\n",n1);
        a=a%1;
    }
     
     
     
     
     
     
     
}