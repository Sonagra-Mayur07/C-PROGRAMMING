#include<stdio.h>
int main()
{
	int a=5,b=7;
	printf("before swap : a is %d and b is %d",a,b);
	int c;
	c=a; //a=5 c=7
	a=b; // b=7 a=7
	b=c; // b=5 c=5
	printf("\nafter swap: a is %d and b is %d",a,b);
	
	return 0;
}
