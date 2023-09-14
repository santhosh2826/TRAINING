#include <stdio.h>
#include <unistd.h>

int main() {
    int s = 10;

    while (s > 0) {
        printf("%d\n", s);
        sleep(1); 
        s--;
    }

    printf("Time's up!\n");

    return 0;
}
