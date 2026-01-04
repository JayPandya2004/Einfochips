#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isValid(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) return false;

    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeap(year) ? 29 : 28; break;
        default:
            return false;
    }
    return day <= daysInMonth;
}

long findJulian(int day, int month, int year) {
    int a = (14 - month) / 12;
    int y = year + 4800 - a;
    int m = month + 12 * a - 3;

    return day + ((153 * m + 2) / 5) + 365 * y + (y / 4)
           - (y / 100) + (y / 400) - 32045;
}

long dateDifference(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (!isValid(d1, m1, y1) || !isValid(d2, m2, y2)) {
        printf("Invalid date(s) provided!\n");
        return -1;
    }

    long jd1 = findJulian(d1, m1, y1);
    long jd2 = findJulian(d2, m2, y2);

    return jd2 - jd1;

}

int main() {
    int d1, m1, y1, d2, m2, y2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    long diff = dateDifference(d1, m1, y1, d2, m2, y2);

    if (diff != -1)
        printf("Difference between dates = %ld days\n", diff);

    return 0;
}

