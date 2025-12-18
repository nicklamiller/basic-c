#include <stdio.h>

typedef struct Rectangle {
  double length;
  double width;
} rectangle;

float area(rectangle rect) { return rect.length * rect.width; }

float perimeter(rectangle rect) { return 2 * (rect.length + rect.width); }

int main() {
  rectangle rect;
  rect.length = 2;
  rect.width = 6;
  printf("Area is: %f\n", area(rect));
  printf("perimeter is: %f\n", perimeter(rect));
  return 0;
}
