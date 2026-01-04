#include <stdio.h>

long isJulian(int day, int month, int year) {
    int a = (14 - month) / 12;
    int y = year + 4800 - a;
    int m = month + 12 * a - 3;

    long julianDay = day + ((153 * m + 2) / 5) + 
                     365 * y + (y / 4) - (y / 100) + 
                     (y / 400) - 32045;

    return julianDay;
}

int main() {
    int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    long jd = isJulian(d, m, y);
    printf("Julian Day Number = %ld\n", jd);

    return 0;
}

