//area of tringle 1/2*b*h

#include <stdio.h>

int main()
{
	float base,heght,area;
	
	printf("Enter the base :");
    scanf("%f",&base);	
    
   	printf("Enter the heght :");
    scanf("%f",&heght);
    
    area =(base*heght)/2;
	printf("The area of tringle : %.2f",area);
	
	return 0;
}
