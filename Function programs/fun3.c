#include<stdio.h>
int ae(int x)
{
    if(x%2==0)
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
        int n=5;
        int s=ae(n);
        if(s==1)
        {
            printf("even");
        }
        else{
            printf("odd");
        }
    }
