//Recursive-function

#include<stdio.h>
int main()
{
	int number;
	printf("enter num");
	scanf("%d",&number);
	printf("%d",add(number));
	
	return 0;
}
int add(int n)
{
	if(n!=0)
	{
		return n+add(n-1);
	}
	else
	{
		return 0;
	}
}
