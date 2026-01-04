#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

bool isValid(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return false;

    int daysInMonth;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(year))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            return false;
    }

    if (day > daysInMonth)
        return false;

    return true;
}

int main() {
    int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    if (isValid(d, m, y))
        printf("Date is valid.\n");
    else
        printf("Date is NOT valid.\n");

    return 0;
}

