#include <stdio.h>
#include <stdlib.h>

void run() {
    int length, n;
    printf("Please input array length:\n");
    scanf("%d", &length);
    int *array = (int *) malloc(length * sizeof(int)); // 动态申请内存
    printf("Please input data:\n");
    for (int i = 0; i < length; ++i) {
        scanf("%d", &array[i]);
    }

    // 冒泡排序
    int len = length - 1;
    for (int i = 0; i < len; ++i) {
        int l = len - i;
        for (int j = 0; j < l; ++j) {
            if (array[j] > array[j + 1]) {
                int t = array[j + 1];
                array[j + 1] = array[j];
                array[j] = t;
            }
        }
    }

    printf("This array data:\n");
    for (int i = 0; i < length; ++i) {
        printf("%d\n", array[i]);
    }
    free(array); // 释放申请的内存
}