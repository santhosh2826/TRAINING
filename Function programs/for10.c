#include<stdio.h>
int avg(char b[40])
{
int i,c=0;
for(int i=0;i<b[i];i++)
{
if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
{
    c++;
}
}
printf("%d",c);
}
void main()
{
    int i, n; 
    char b[40];
    printf("enter the string");
    gets(b);

avg(b);
}