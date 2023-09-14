#include<stdio.h>
float area(float ra)
{
    float a;
    a=3.14159*ra*ra;
    return(a);
}
void main()
{
    float s,r=10;
     s=area(r);
printf("%f",s);
}
