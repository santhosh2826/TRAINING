#include<stdio.h>
#include<string.h>
void isdigi()
{
 int i;
 char s[20];
 printf("enter the string");
 gets(s);
  for(i=0;i<strlen(s);i++)
  {
if(s[i]>='0'&&s[i]<='9')
{
    printf("%c",s[i]);
}
}   
}   
void main()
{
    isdigi();
}