#include <stdio.h>

int main()
{
    int num, rem, i;
    int f[10] = {0};
    printf("Enter numer ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem= num % 10;

        f=f+rem;
        num /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("Frequency of digit %d: %d\n", i, f[i]);
    }

    return 0;
}
