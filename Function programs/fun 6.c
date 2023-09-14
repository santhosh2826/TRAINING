#include<stdio.h>
 
 int max(int a[],int n)
 {
 	int max,i;
 	max=a[0];
    for(i=1; i<n; i++)
    {
         if(max<a[i])
		  max=a[i];      
    }
       printf("minimum of number is : %d",max);
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
 
 
    
}