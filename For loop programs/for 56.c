#include <stdio.h>

int main() {
    int n, fD, lD;

    printf("Enter a number: ");
    scanf("%d", &n);
    lD = n % 10;

    fD = n;
    while(fD>=10)
    {
        fD=fD/10;
    }
 
    

    printf("First digit: %d\n", fD);
    printf("Last digit: %d\n", lD);

    return 0;
}
