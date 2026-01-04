#include <stdio.h>

int main() {
    int i, j, isPrime;

    for (i = 2; i <= 99; i++) {     // Loop for each number
        isPrime = 1;                // Assume prime

        for (j = 2; j * j <= i; j++) {  // Check divisors
            if (i % j == 0) {
                isPrime = 0;        // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}

