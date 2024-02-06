#include<stdio.h>

int main()
{
	float l,w,a;
	
	printf("Enter the length : ");
	scanf("%f",& l);
	printf("Enter the width : ");
	scanf("%f",& w);
	
	a=l*w;
	printf("The rectangle is : %.2f",a);
	return 0;
}
