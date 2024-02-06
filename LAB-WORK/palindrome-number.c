// palindrome number.

#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	
	printf("Enter the number :");
	scanf("%d",& num);
	 int abc=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	if(abc==rev)
	{
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
	
	return 0;
}
