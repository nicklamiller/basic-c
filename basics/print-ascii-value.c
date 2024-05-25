#include <stdio.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <character>\n", argv[0]);
        return 1;
    }
    char c = argv[1][0];
    printf("The ASCII value for '%c' is %d\n", c, c);
    return 0;
}
