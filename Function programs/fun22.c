#include <stdio.h>
#include<string.h>

   void ispoli(){
      char s[10];
      int i, l;
      int flag = 0;
      printf("enter the string");
      gets(s);
      l= strlen(s);
      for(i=0;i < l ;i++){
         if(s[i] != s[l-i-1]) {
            flag = 1;
            break;
         }
      }
      if (flag==1){
         printf("  not a palindrome");
      } else {
         printf("  palindrome");
      }
   }
void main()
{
    ispoli();
}
