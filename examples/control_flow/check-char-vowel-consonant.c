#include <stdbool.h>
#include <stdio.h>

bool val_is_in_array(char c, const char *arr, size_t n) {
  for (size_t i = 0; i < n; i++) {
    if (arr[i] == c) {
      return true;
    }
  }
  return false;
}

int main() {
  char c;
  printf("Input a character: ");
  scanf("%c", &c);
  const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  bool is_vowel = val_is_in_array(c, vowels, sizeof(vowels));
  if (is_vowel) {
    printf("%c is a vowel.\n", c);
  } else {
    printf("%c is not a vowel.\n", c);
  }
}
