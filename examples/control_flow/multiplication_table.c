#include <stdio.h>

void print_table(int num, int range) {
  for (int i; i <= range; i++) {
    printf("%d * %d = %d\n", num, i, num * i);
  }
}

int main() {
  int num = 5;
  int range = 10;
  print_table(num, range);
  return 0;
}
