#include<stdio.h>
void isfiq()
{
    int i,a[30],n;
    printf("Enter the number");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    int c=0;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            printf("%d",a[i]);
        }
    }
}
}
void main()
{
    isfiq();
}
