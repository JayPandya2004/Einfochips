#include <stdio.h>
#include <stdbool.h>

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

void printDateOFWeek(int day, int month, int year) {
    if (!isValid(day, month, year)) {
        printf("Invalid date!\n");
        return;
    }

    long jd = findJulian(day, month, year);
    int dow = (jd + 1) % 7;  // 0=Monday, 6=Sunday (adjustable)

    const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                          "Friday", "Saturday", "Sunday"};

    printf("Day of week: %s\n", days[dow]);
}

int main() {
    int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    printDateOFWeek(d, m, y);
    return 0;
}

