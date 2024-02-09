//(14)WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
    int num1, num2, num3;

   printf("Enter First numbers: ");
    scanf("%d", &num1);
    
    printf("Enter Second numbers: ");
     scanf("%d",&num2);
    
    printf("Enter therd numbers: ");
     scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) 
	{
        printf("The largest number is: %d\n", num1);
    } 
	else if (num2 > num1 && num2 > num3)
	 {
        printf("The largest number is: %d\n", num2);
    } 
	else
	 {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}


