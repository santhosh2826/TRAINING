#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        printf("It is an lowercase");
    }
    else 
    {
        printf("It is an uppercase");
    }
}