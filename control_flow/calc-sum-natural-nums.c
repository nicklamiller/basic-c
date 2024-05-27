#include <stdio.h>


int main() {
    int num = 10;
    int sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
