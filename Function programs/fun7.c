#include<stdio.h>
int avg(int b[],int c)
{
int avg,sum=0;
for(int i=0;i<c;i++)
{
    sum=sum+b[i];
    avg=sum/n;
}
printf("%d",avg);
}
void main()
{
    int a[1000],i, n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

avg(a, n);
}