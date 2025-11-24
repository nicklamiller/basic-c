#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
    int i;
    for (i=2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int N = 71;
    int i;
    for (i=1; i<=N; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}
