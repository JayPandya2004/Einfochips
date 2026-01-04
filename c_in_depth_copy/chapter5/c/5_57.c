#include <stdio.h>
#include <math.h>

int isPerfectSquare(int x);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not a Fibonacci number\n");
        return 0;
    }

    if (isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4)) {
        printf("%d is a Fibonacci number\n", n);
    } else {
        printf("%d is NOT a Fibonacci number\n", n);
    }

    return 0;
}

int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}
