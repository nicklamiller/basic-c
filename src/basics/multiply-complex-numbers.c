#include <stdio.h>


typedef struct complexNumber {
    int real;
    int img;
} complex;


complex add(complex x, complex y) {
    complex sum;
    sum.real = x.real + y.real;
    sum.img = x.img + y.img;
    return sum;
}


int main() {
    complex a, b, sum;
    a.real = 2;
    a.img = 3;

    b.real = 4;
    b.img = 5;

    printf("\n a = %d + %di", a.real, a.img);
    printf("\n b = %d + %di", b.real, b.img);

    sum = add(a, b);

    printf("\n sum = %d + %di\n", sum.real, sum.img);

    return 0;
}
