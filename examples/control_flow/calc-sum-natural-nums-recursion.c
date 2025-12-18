#include <stdio.h>

int sum_of_natural_nums(int n) {
  if (n == 1) {
    return n;
  } else {
    return n + sum_of_natural_nums(n - 1);
  }
}

int main() {
  int n = 10;
  printf("%d\n", sum_of_natural_nums(n));
  return 0;
}
