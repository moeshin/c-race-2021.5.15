#include <stdio.h>
#define MAX 100
#define COUNT 10

//void run() {
//    printf("Fibonacci sequence within %d:\n", MAX);
//    int t1 = 0, t2 = 1, t;
//    printf("%d\n%d\n", t1, t2);
//    while (1) {
//        t = t1 + t2;
//        if (t > MAX) {
//            break;
//        }
//        printf("%d\n", t);
//        t1 = t2;
//        t2 = t;
//    }
//}

void run() {
    printf("Fibonacci sequence, %d items:\n", COUNT);
    int t1 = 0, t2 = 1, t;
    for (int i = 1; i <= COUNT; ++i) {
        printf("%d\n", t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
    }
}