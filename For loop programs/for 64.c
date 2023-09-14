#include <stdio.h>

int main() {
    int b, e,r = 1;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &e);
    for (int i = 0; i < e; ++i) {
        r *= b;
    }
    printf("%d^%d = %d\n", b, e, r);

    return 0;
}
