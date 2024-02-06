// array sort ascending or descing order{78,96,52,41} op:41,52,78,96;

#include<stdio.h>
void main()
{
	int num[100],i,j,x;
	printf("Enter 5 values :");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\nbefore sorting array is");
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[i])
			{
				x=num[i];
				num[i]=num[j];
				num[j]=x;
			}
		}
	}
	
	printf("\nafter sorting array is :  ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",num[i]);
	}
}
