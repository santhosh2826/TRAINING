#include<stdio.h>
float area(float b,float h)
{
    float a;
    a=(b*h)/2;
    return(a);
}
void main()
{
    float s,b=10,h=5;
     s=area(b,h);
printf("%f",s);
}
