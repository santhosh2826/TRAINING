#include<stdio.h>
#include<math.h>
void main()
{
    int i,n=5;
    double s, sum=0;
    for(i=1;i<=5;i++)
    {
        s=1/ pow(i, i);
        sum=sum+s;
    }
    printf("%f",sum);
}