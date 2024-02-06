#include<stdio.h>

void msg(); // declaration

int main()
{
	msg(); //call
	printf("hello main function");
	msg();
	return 0;
}

// return type fun_name(){}

void msg() // defination
{
	printf("hello all");
}
