#include<stdio.h>
float cel(float c)
{
    float a;
    a=(9/5)*c + 32;
    return(a);
}
void main()
{
    float s,r=10;
     s=cel(r);
printf("%f",s);
}
