#include <stdio.h>

int main() {
  int year;
  printf("Please provide a year: ");
  scanf("%d", &year);
  if ((year % 4 == 0) & (year % 100 != 0) | (year % 400 == 0)) {
    printf("%d is a leap year", year);
  } else {
    printf("%d is a NOT leap year", year);
  }
  printf("\n");
  return 0;
}
