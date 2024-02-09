//31.Write a program in C to read any Month Number in integer and display the
//number of days for this month.

#include <stdio.h>

int main() {
    int monthNumber, daysInMonth;


    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);


    if (monthNumber >= 1 && monthNumber <= 12) {

        switch (monthNumber) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                daysInMonth = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                daysInMonth = 30;
                break;
            case 2:
                daysInMonth = 28;
                break;
        }


        printf("Number of days in month %d: %d\n", monthNumber, daysInMonth);
    } else {
        printf("Please enter a number between 1 and 12.\n");
    }

    return 0;
}

