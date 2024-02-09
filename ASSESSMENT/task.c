#include <stdio.h>


float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}


float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    do {

        printf("\n===== Calculator Menu =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");


        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5); 

    return 0;
}

