#include<stdio.h>
void main(){
int i,v;
int a[]={1,1,2,3};
printf("Enter the occurance ");
scanf("%d",&v);
for(i=0;i<4;i++)
{
    if(a[i]==v)
    {
        continue;
    }
    else{
        printf("%d",a[i]);
    }
}
}