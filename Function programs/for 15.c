#include<stdio.h>
float area(float ra)
{
    float a;
    a=(4/3.0)*3.14*ra*ra*ra;;
    return(a);
}
void main()
{
    float s,r=2;
     s=area(r);
printf("%f",s);
}
