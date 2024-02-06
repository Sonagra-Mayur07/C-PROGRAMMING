#include<stdio.h>
int main()
{
	int A,B,C;
	printf("Enter the value A:- ");
	scanf("%d",&A);
	
	printf("Enter the value B:- ");
	scanf("%d",&B);
    
    C=A;
    A=B;
    B=C;
	
	printf("Swapping B :- %d C :- %d ",A,B);
	
	return 0;
	
}
