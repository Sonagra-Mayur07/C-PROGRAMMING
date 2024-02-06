#include<stdio.h>
void main()
{
	printf(":Find a number is prime or not \n\n\n:");
	
	int  num ,i;
	int count = 0;
	
	printf("Enter the number");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%1==0)
		{
			count ++; 
		}
	}
	
	if(count<=2)
	{
		printf("this number is prime :");
	}
	else
	{
		printf("this number is not prime :");
	}
}
