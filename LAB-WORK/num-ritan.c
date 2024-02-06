// reverse number.

#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	
	printf("Enter the Number :");
	scanf("%d",& num);
	int temp=num;
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	printf("%d : is reverse of :  %d",rev,temp);
	
	return 0;
}


































