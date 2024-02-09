//36.Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
void main()
{
	printf(":ELECTRICITY BILL:\n\n\n");
	
	int unit,totalecharge;
	
	printf("plase Enter The unit :-");
	scanf("%d",&unit);
	
	if(unit<=50)
	 {
	 	totalecharge= unit*0.50;
	 }
	else if (unit>50 && unit<150)
	{
		totalecharge= 50*0.50 + (unit-50) * 0.75;
	}
	else if (unit>150 && unit<250)
	{
		totalecharge = 50*0.50 + 100*0.75 +(unit-150) * 1.20;
	}
	else if (unit>250)
	{
		totalecharge= 50*0.50 + 100*0.75 + 250+1.20 + unit-500;
	}
	else
	{
		printf("Enter The vaild unit ");
	}
	
	int additional=totalecharge*0.20+ totalecharge;
	
	printf("%d",additional);
}
