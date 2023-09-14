#include <stdio.h>

int sum(int n, int l) {
    int sum = 0;

    for (int i = n; i < l; i += n) {
        sum += i;
    }

    return sum;
}

int main() {
    int num = 3; // The given number
    int lim = 10; // The specified limit
    int r = sum(num, lim);
    
    printf("%d", r);
    
    return 0;
}
