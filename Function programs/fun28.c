#include<stdio.h>
void strlen()
{
    int i,l=0;
    char s[20];
    printf("enter the string");
    gets(s);
    for(i=0;s[i];i++)
{
    l++;
}
printf("%d",l);
}
void main()
{
    strlen()
}