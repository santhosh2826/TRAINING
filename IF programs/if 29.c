#include<stdio.h>
void main()
    {
int a,w;
printf("enter the age and work experice");
scanf("%d %D",&a,&w);
if(a<25&&w<=1)
{
    printf("Entry level");
}
else if (a<40&&w<=5)
{
    printf("junior");
}
else if (a<=40&&w>5)

{
    printf("senior");
}
else{
    printf("Expert");
}

    }