// array 

#include<stdio.h>
void main()
{
	int i, arr1[5], arr2[5] ,ans[5];
	
	printf("Enter the 5 value :- ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
		printf("Enter the 5 value :- ");
	
	for(i=0;i<5;i++)
	{
	    scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<5;i++)
	{
		ans[i]=arr1[i]+arr2[i];
	}
	
	printf("Addition of arr-1 and arr-2 :- ");
	
	for(i=0;i<5;i++)
	{
		printf("\t%d",ans[i]);
	}
	
	
	
}
