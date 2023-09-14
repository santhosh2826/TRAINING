#include<stdio.h>
int ae(int x)
{int i,c=0;
for(i=1;i<=x;i++)
{
    if(x%i==0)
 c++;
 }  
 if(c==2)
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
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }
