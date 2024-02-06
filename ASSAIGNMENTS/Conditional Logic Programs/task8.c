//(8) WAP to accept the height of a person in centimeters and categorize the
//person according to their height.

#include <stdio.h>

int main() {
    float height;

    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    if (height < 130) 
	{
        printf("Person is Short\n");
    }
	 else if (height >= 130 && height < 200)
	  {
        printf("Person is Average height\n");
    } 
	else
	 {
        printf("Person is Tall\n");
    }

    return 0;
}




