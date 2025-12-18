#include <math.h>
#include <stdio.h>

int main() {
  double principal = 10000;
  double rate = 5;
  double time = 2;
  double amount = principal * pow((1 + rate / 100), time);
  float compound_interest = amount - principal;
  printf("amount paid: %lf\n", compound_interest);
  return 0;
}
