#include<stdio.h>
#include<string.h>
void isemail()
{
 int i;
 char s[20];
 printf("enter the string");
 gets(s);
  for(i=0;i<strlen(s);i++)
  {
if(s[i]=='@'||s[i]=='.')
    printf("  valid");
    break;
else
    printf(" not valid");
}
}      
void main()
{
    isemail();
}