#include<stdio.h>
void main()
    {
int p;
printf("enter the percentage");
scanf("%d",&p);
if(p>=99)
{
    printf("Grade A");
}
else if (p>=50)
{
    printf("Grade B");
}
else
{
    printf("Grade C");
}
    }
