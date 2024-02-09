//(19) electricity bill

#include<stdio.h>
void main()
{
	printf(":ELECTRICITY BILL:\n\n\n");
	
	int unit,totalecharge;
	
	printf("plase Enter The unit :-");
	scanf("%d",&unit);
	
	if(unit<=350)
	 {
	 	totalecharge= unit*1.20;
	 }
	else if (unit>350 && unit<600)
	{
		totalecharge= 350*1.20 + (unit-350) * 1.50;
	}
	else if (unit>600 && unit<800)
	{
		totalecharge = 350*1.20 + 250*1.50 +(unit-600) * 1.80;
	}
	else if (unit>800)
	{
		totalecharge= 350*1.20 + 250*1.50 + 200+1.80 + unit-800;
	}
	else
	{
		printf("Enter The vaild unit ");
	}
	
	
	printf("%d",totalecharge);
}
