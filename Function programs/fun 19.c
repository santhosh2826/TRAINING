#include<stdio.h>
int avg(int a[],int b[],int c1,int c2)
{
int j,sum=0,i;

for( i=0;i<c1;i++)
{
    for(j=0;j<c2;j++)
    {
if(a[i]==b[j])
{
printf("%d",a[i]);
}
}
}

}
void main()
{
    int a[1000],b[1000],i, n1,n2;
    printf("enter the array 1");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array 2");
    scanf("%d",&n2);
    for(int j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }

avg(a,b, n1,n2);
}