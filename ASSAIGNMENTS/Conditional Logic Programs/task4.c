//(4) WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{
	
	printf("\n \t \tSimple Calculator");
	
	int value1, value2, operation;
	
	printf("\n \t \t Please Enter First Value :- ");
	scanf("%d",&value1);
	
	printf("\n \t \t Please Enter Second Value :- ");
	scanf("%d",&value2);
	
	printf("\n \t \t Please Select Operation : ");
	
	printf("\n \t \t 1 - Addition");
	printf("\n \t \t 2 - Substraction");
	printf("\n \t \t 3 - Multiplication");
	printf("\n \t \t 4 - Division");
	printf("\n \t \t 5 - Modulo");
	
	printf("\n \t \t Operation :- ");
	
	scanf("%d",&operation);
	
	switch(operation)
	{
		case 1 : printf("\n \t \t Addition is :- %d", (value1 + value2));
		break;
		
		case 2 : printf("\n \t \t Substraction is :- %d ", (value1 - value2));
		break;
		
		case 3 : printf("\n \t \t Substraction is :- %d ", (value1 * value2));
		break;
		
		case 4 : printf("\n \t \t Substraction is :- %d ", (value1 / value2));
		break;
		
		case 5 : printf("\n \t \t Substraction is :- %d ", (value1 % value2));
		break;
		
		default : printf("\n \t \t Please Select Valid Operation.");
	}
	
	return 0;
	
}
