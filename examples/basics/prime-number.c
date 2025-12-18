#include <stdio.h>

void checkIsPrime(int num) {
  int i;
  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      printf("The %d is not prime number.\n", num);
      return;
    }
  }
  printf("The %d is a prime number.\n", num);
  return;
}

int main() {
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  checkIsPrime(num);
  return 0;
}
