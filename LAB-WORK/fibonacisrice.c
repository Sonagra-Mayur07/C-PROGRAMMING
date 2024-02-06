//fibonacisrice 

#include<stdio.h>
int main()
{
	int i,n1=0,n2=1,n3=n1+n2;
	
	printf("%d %d",n1,n2);
	
	for(i=1;i<=11;i++)
	{

		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d",n3);
	}
	
	return 0;
}
