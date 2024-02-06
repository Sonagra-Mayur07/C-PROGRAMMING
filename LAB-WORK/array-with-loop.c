// Array with loop

#include<stdio.h>
void main()
{
	int i, arr[5];
	
	printf("Enter the 5 value :- ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Five value of array is :");
	
	for(i=0;i<5;i++)
	{
		printf("%d :", arr[i]);
	}
	
}
