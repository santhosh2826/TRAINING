#include<stdio.h>
 
 int min(int a[],int n)
 {
 	int min,i;
 	min=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];      
    }
       printf("minimum of number is : %d",min);
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
    min(a,n);
 
 
    
}