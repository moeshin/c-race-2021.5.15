#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Item struct s_item
#define Array struct s_array

Item {
    int data;
    Item *next;
};

Array {
    int length;
    Item *next;
};

Array *array_init() {
    Array *arr = malloc(sizeof(Array));
    arr->length = 0;
    arr->next = NULL;
    return arr;
}

void array_append(Array *arr, int data) {
    Item next;
    if (arr->length == 0) {
        arr->next = &next;
    }
    return &next;
}

void array_free(Array *arr) {

}

void run() {
    Array *arr = array_init();
    struct s_item *current = NULL;
    char str[8];
    while (1) {
        scanf("%s", str);
        if (!strcmp(str, ".")) {
            break;
        }
        struct s_item next;
        next = ;
    }
    printf("%s", str);
//    array
}