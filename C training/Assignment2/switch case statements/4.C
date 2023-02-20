//Write a program to display day of week from given date (day, month and year)
#include <stdio.h>

int main() {
    int day, month, year, century, year_of_century, day_of_week;

    printf("Enter date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    century = year / 100;
    year_of_century = year % 100;

    day_of_week = (day + ((13 * (month + 1)) / 5) + year_of_century + (year_of_century / 4) + (century / 4) - (2 * century)) % 7;

    switch (day_of_week) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }

    return 0;
}
