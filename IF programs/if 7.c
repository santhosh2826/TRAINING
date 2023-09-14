#include<stdio.h>
void main()
{
    int n1,n2,n3;
     printf("enter the number1 and number2 ");
     scanf("%d %d",&n1,&n2);
     printf("1:add/n 2:sub/n 3:mul/n 4:div");
     scanf("%d",&n3);
     if(n3==1)
     {
        int a=n1+n2;
        printf("%d",a);
     }
     else if(n3==2)
     {
        int b=n1-n2;
        printf("%d",b);
     }
     else if(n3==3)
     {int c=n1*n2;
        printf("%d",c);}
        else 
        {
            int d=n1/n2;
        printf("%d",d);
        }
     
}