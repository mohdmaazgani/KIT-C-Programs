#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

void printLeapYears(int startYear, int endYear) {
    printf("Leap years between %d and %d:\n", startYear, endYear);
    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            printf("%d\n", year);
        }
    }
}

int main() {
    int startYear, endYear;
    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);
    printLeapYears(startYear, endYear);
    return 0;
}
