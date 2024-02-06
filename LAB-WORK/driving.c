#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	
	if(age>18)
	{
		printf("you can apply for driving licence");
	}
	else if (age>16&& age<=18)
	{
		printf("you can apply for learing licence");
	}
	else{
		printf("you can't apply")
	}
	
	return 0;
}
