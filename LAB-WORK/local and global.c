//Local variable :- The variable declared within the Local scope are called

//Global variable :- The variable declared in the global scope are called global
                    // Global variable are visible in every part of program.   


#include<stdio.h>
int a;
int main()
{
	int b=10; //Local
	printf("%d",b); // b is Local variable
	
	//outside of main function b is not accessble.
	
	
	sum();
}

void sum()
{
	
	a=7;
	printf("%d",a);
	
}
