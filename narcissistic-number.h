#include <stdio.h>

void run() {
    int n1, n2, n3;
    printf("Narcissistic number:\n");
    for (int n = 100; n < 1000; ++n) {
        n1 = n / 100;
        n2 = n / 10 % 10;
        n3 = n % 10;
        if (n == n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3) {
            printf("%d\n", n);
        }
    }
}