// (7)Accept marks from user and check pass or fail.
#include <stdio.h>

int main() {
    int marks;

    printf("Enter a number:  ");
    scanf("%d", &marks);

    if (marks > 33) 
	{
        printf("%d is a pass.\n", marks);
    } 
	else if (marks < 33) 
	{
        printf("%d marks is a fail.\n", marks);
    }

    return 0;
}
