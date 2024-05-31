#include <stdio.h>


int main() {
    int arr[] = {1, 4, 2, 3, 33, -1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }

    }
    printf("The min is: %d and the max is: %d\n", min, max);
    return 0;
}
