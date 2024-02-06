#include<stdio.h>
int main()
{
	int i,num,facto=1;
	
	printf("Enter the num :-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		facto=facto*i;
		
	}
	printf("%d",facto);
	
	return 0;
}
