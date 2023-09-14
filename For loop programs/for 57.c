#include <stdio.h>

int main() {
    int n, fD, lD,sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    lD = n % 10;

    fD = n;
    while(fD>=10)
    {
        fD=fD/10;
    }
    
sum=fD+lD;
printf("%d",sum);
    



    return 0;
}
