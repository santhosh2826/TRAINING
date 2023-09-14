#include<stdio.h>
int avg(int b[],int c)
{
int j,sum=0;
for(int i=0;i<c;i++)
{
    for(j=i+1;j<c;j++)
    {
if(b[i]!=b[j])
{
    printf("%d",b[i]);
}
}

}
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