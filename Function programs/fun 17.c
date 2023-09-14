#include<stdio.h>
int ae(int x)
{
    if(x%4==0&&x%4!=0)
    {
return 1;
    }
    else
    {
        return 2;
    }
}
void main()
    {
        int n=2024;
        int s=ae(n);
        if(s==1)
        {
            printf("leap");
        }
        else{
            printf("not leap");
        }
    }
