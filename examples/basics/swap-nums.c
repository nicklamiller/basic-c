#include <stdio.h>


int main() {
    int a = 1;
    int b = 354;
    printf("a is: %d, b is: %d\n", a, b);
    int tmp;
    tmp = b;
    a = b;
    b = tmp;
    printf("Now, a is: %d, b is: %d\n", a, b);
    return 0;
}
