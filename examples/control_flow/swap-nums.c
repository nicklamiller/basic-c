#include <stdio.h>

int main() {
  int a = 10, b = 5, temp;
  printf("Before swapping: a = %d, b = %d\n", a, b);
  temp = a;
  a = b;
  b = temp;
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}
