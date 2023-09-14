#include<stdio.h>
void main()
    {
int w;
printf("enter the weight");
scanf("%d",&w);
    if(w<18.5)
    {
        printf("underweight");
    }
    else if(w<=24.5)
    {
        printf("normal weight");
    }
    else if(w<29.9)
    {
      printf("over  wieght");  
    }
    else
    {
        printf("obese");
    }
    }
    