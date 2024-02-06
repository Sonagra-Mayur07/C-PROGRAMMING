//(12)WAP to find maximum number among 3 numbers using ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, num3;


    printf("Enter First numbers: ");
    scanf("%d", &num1);
    
    printf("Enter Second numbers: ");
     scanf("%d",&num2);
    
    printf("Enter therd numbers: ");
     scanf("%d", &num3);

     (num1 > num2) ? ((num1 > num3) ? printf(" maximun number is : %d",num1) : printf(" maximun number is : %d",num3)) : ((num2 > num3) ? printf(" maximun number is : %d",num2) : printf(" maximun number is : %d",num3));


    return 0;
}

