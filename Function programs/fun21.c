#include<stdio.h>
#include<string.h>
void isrev()
{
 int i;
 char s[20];
 printf("enter the string");
 gets(s);
  for(i=strlen(s)-1;i>=0;i--)
  {
printf("%c",s[i]);
}

}      
void main()
{
    isrev();
}