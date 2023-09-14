#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("it is an alphabet");
    else if(c>=48 #&& c<=57)
    {
        printf("it is an  digit");

    }
    else{
        printf("symbol");
    }
}