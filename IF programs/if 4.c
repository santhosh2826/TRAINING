#include<stdio.h>
void main()
{
    int mark;
    printf("enter the marks");
    scanf("%d",&mark);
    if(mark>60)
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
}