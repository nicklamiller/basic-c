#include <stdio.h>

int main() {
  // convert Celsius to Fahrenheit
  float temp_f;
  printf("Input a temperature in Fahrenheit: ");
  scanf("%f", &temp_f);
  float temp_c = (temp_f - 32) * 5 / 9;
  printf("The degress in celsius is: %0.2f\n", temp_c);
  return 0;
}
