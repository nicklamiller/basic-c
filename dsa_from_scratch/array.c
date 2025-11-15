/*
An array is a continguous chunk of memory spaces, where each single memory space
can hold a piece of data. To implement an array we'll need:

1. A starting address for our memory chunk we can call `head`
2. The length of our continguous chunk of memory
3. The actual contiguous memory spaces "freed" for use
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int* head;
    int length;
} Array;


Array create_array(int length) {
    int* head = (int*)malloc(length * sizeof(int));
    Array array;
    array.head = head;
    array.length = length;
    return array;
};


void destroy_array(Array* array) {
    free(array->head);
    array->head = NULL;
    array->length = 0;
};


void print_array(Array array) {
    printf("Array starts at: %p.\n", (void*)array.head);
    printf("Array length: %d\n", array.length);
    printf("Array:\n[");
    for (int i = 0; i < array.length; i++) {
        printf("\t%d,\n", array.head[i]);
    }
    printf("]\n");
};


void set_value(Array array, int index, int value) {
    if (index < 0 || index >= array.length) {
        printf("Error: Index %d out of bounds (0-%d)\n", index, array.length - 1);
        return;
    }
    array.head[index] = value;
};


int get_value(Array array, int index) {
    if (index < 0 || index >= array.length) {
        printf("Error: Index %d out of bounds (0-%d)\n", index, array.length - 1);
        return 0;
    }
    return array.head[index];
};


int main() {
    int arr1_length = 7;
    Array array1 = create_array(arr1_length);
    print_array(array1);
    
    int arr2_length = 11;
    Array array2 = create_array(arr2_length);
    for (int i = 0; i < arr2_length; i++) {
        set_value(array2, i, i*2);
    }
    printf("At index: 3, value: %d\n", get_value(array2, 3));
    print_array(array2);
    destroy_array(&array2);
    print_array(array2);
    return 0;
};
