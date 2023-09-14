#include<stdio.h>
void main(){
    int n=5;
  int   s=fact(n);
    printf("%d",s);
}
int fact (int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return(fact);
}