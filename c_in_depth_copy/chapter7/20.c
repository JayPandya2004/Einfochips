#include <stdio.h>

int remainderRecursive(int a, int b) {
    if (a < b) {
        return a;
    }
    return remainderRecursive(a - b, b);
}

int main() {
    int a = 29, b = 5;
    printf("Remainder of %d divided by %d is: %d\n", a, b, remainderRecursive(a, b));
    return 0;
}

