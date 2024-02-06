#include<stdio.h>
int main()
{
//	int i,j;
//	for(i=1;i<5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",i);
//		}
//		printf("\n");
//	}
	

	
	
	
		int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
		return 0;
}


//debug:
//i=0 0<5
//j=0 0<0 * j=1 1<=0
//i=1 1<5
//j=0 0<=1 j =1 1<=1
//i=1 j=5
