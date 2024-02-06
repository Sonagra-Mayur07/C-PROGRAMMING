// (18).Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
void main()
{
	float Bayy,sellprice,oderprice;
	
	printf("Enter the bayy :");
	scanf("%f",&Bayy);
	
	printf("Enter the selprice :");
	scanf("%f",&sellprice);
	

    if (Bayy > sellprice) 
	{
        oderprice = Bayy - sellprice;
        printf("Loss: %.2f\n", oderprice);
        
    }
	 else
	  {
        oderprice = sellprice - Bayy;
        printf("Profit: %.2f\n", oderprice);
    }
}
