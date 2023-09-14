#include <stdio.h>

int main() {
    int n,mul=1;

    printf("Enter a number: ");
    scanf("%d", &n);
     int temp=n;
    while(n!=0)
    {
        int rem=n%10;
        mul=mul*rem;
        n=n/10;
        
    }
    printf("%d",mul);
    

    



    return 0;
}
