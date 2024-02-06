#include<stdio.h>
void main()
{
	int i, num[5], big=0;
	printf("Enter the 5 value :- ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0; i<5; i++)
	{
		if(big<num[i])
		{
			big = num[i];
		}
	}
	
	
	printf("The Big number is :- %d", big);
}
