#include <stdio.h>

long long int factorial(long long int n) {
  if (n == 1) {
    return n;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  long long int n;
  printf("Enter number to find its factorial: ");
  scanf("%lld", &n);
  printf("The factorial of %lld is %lld\n", n, factorial(n));
  return 0;
}
