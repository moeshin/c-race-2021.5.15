#include <stdio.h>
#include <math.h>

void run() {
    unsigned char b = 1;
    int n;
    printf("Please input a number:");
    scanf("%d", &n);
    if (n > 1) {
        int s = (unsigned int) sqrt(n);
        for (int i = 2; i <= s; ++i) {
            if (n % i == 0) {
                b = 0;
                break;
            }
        }
        printf("i = %d\ns = %d\nn = %d\n", i, s, n);
    } else {
        b = 0;
    }
    printf("%d, %s a prime number.\n", n, b ? "is" : "is not");
}