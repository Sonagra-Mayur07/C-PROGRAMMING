#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;


    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
           
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0; 
    }

   
    printf("Result: %.2d\n", result);

    return 0;  
}

