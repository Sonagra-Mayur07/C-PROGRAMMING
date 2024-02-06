#include <stdio.h>

int main() {
    int num;

    printf("1 for Monday\n2 for Tuesday\n3 for Wednesday\n4 for Thursday\n5 for Friday\n6 for Saturday\n7 for Sunday\n\n");
    printf("Select your choice from the above menu: ");
    scanf("%d", &num);

    switch (num) {
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
        case 7:
            printf("Sunday");
            break;
            
        default:
            printf("Enter a valid choice");
    }

    return 0;
}

