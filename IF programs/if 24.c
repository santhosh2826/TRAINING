#include<stdio.h>
void main()
    {
int a;
printf("enter the age");
scanf("%d",&a);
if(a<18)
{
    printf("child");
}
else if (a<=65)
{
    printf("adult");
}
else{
    printf("seneior");
}
    }
