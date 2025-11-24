#include <stdio.h>


double average(int a[], int n) {
    int sum = 0;
    for (int i=0; i < n; i++){
        sum += a[i];
    }
    return (double)sum / n;
}


int main() {
    int a[] = {1, 2, 3, 4, 5};
    int len_a = sizeof(a) / sizeof(a[0]);
    printf("mean is: %f\n", average(a, len_a));
    return 0;
}
