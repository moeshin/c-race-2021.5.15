#include <stdio.h>

void run() {
    unsigned long long r = 1;
    int n;
    printf("Please input a number:");
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative numbers have no factorial.");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        r *= i;
    }
    printf("%d! = %llu", n, r);
}