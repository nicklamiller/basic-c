#include <stdio.h>


int main() {
    int arr1[5][5] = { { 0, 1, 2, 3, 4 },
                       { 2, 3, 4, 5, 6 },
                       { 4, 5, 6, 7, 8 },
                       { 5, 4, 3, 2, 6 },
                       { 2, 5, 4, 3, 1 } };

    int* arr2[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = &arr1[i][j];
        }
    }

    for (int k = 0; k < 5; k++) {
        printf("\n");
        for (int l = 0; l < 5; l++) {
            printf("arr1: %d, arr2: %d ", arr1[k][l], *arr2[k][l]);
        }
    }
    printf("\n");
    return 0;
}
