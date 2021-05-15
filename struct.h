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
    Item *next;
};

Array *array_init() {
    Array *arr = malloc(sizeof(Array));
    arr->next = NULL;
    return arr;
}

int array_length(Array *arr) {
    int len = 0;
    Item *next = arr->next;
    if (next != NULL) {
        ++len;
        while ((next = next->next) != NULL) {
            ++len;
        }
    }
    return len;
}

void array_append(Array *arr, int data) {
    Item *next = malloc(sizeof(Item));
    next->next = NULL;
    next->data = data;
    Item *n = arr->next;
    if (n == NULL) {
        arr->next = next;
    } else {
        while (n->next != NULL) {
            n = n->next;
        }
        printf("n->data = %d\n", n->data);
        n->next = next;
    }
}

void item_free(Item *next) {
    if (next != NULL) {
        item_free(next->next);
        free(next);
    }
}

void array_free(Array *arr) {
    item_free(arr->next);
    free(arr);
}

void run() {
    Array *arr = array_init();
    char str[8];
    printf("Please input data, input . to exit:\n");
    while (1) {
        scanf("%s", str);
        if (!strcmp(str, ".")) {
            break;
        }
        array_append(arr, strtol(str, NULL, 10));
    }

    printf("Array data:\n");
    Item *next = arr->next;
    if (next != NULL) {
        printf("%d\n", next->data);
        while ((next = next->next) != NULL) {
            printf("%d\n", next->data);
        }
    }
    printf("length: %d", array_length(arr));
    array_free(arr);
}