#include <stdio.h>


float multiply(float a, float b) {
    return a * b;
}


int main() {
    float a, b;
    printf("Input two numbers: ");
    scanf("%f%f", &a, &b);
    printf("The product is: %f\n", multiply(a, b));
    return 0;
}
