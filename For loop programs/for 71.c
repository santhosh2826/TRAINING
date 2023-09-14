#include<stdio.h>
#include<string.h>
void main(){
    char text[50];
    int l=0,n=0,o=0,s=0;
    printf("Enter the string");
    gets(s);
      for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            l++;
        } else if (s[i] == ' ') {
            s++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            n++;
        } else {
            o++;
        }
    }

    printf("Letter count: %d\n", l);
    printf("Space count: %d\n", s);
    printf("Number count: %d\n", n);
    printf("Other count: %d\n", o);


}



