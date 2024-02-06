//variable are containers for storing data values,
// like number and characters;

#include<stdio.h>
int main()
{
	//create variables
	int num=5;            // integer ( for numric values )
	float floatnum=5.99;  // float ( for number with point)
	char letter='D';
	double number=5.6845; // double ( for many point value)
	
	//print variables
	
	printf("%d\n",num);      // format specifier for int %d and %i for int;
	printf("%f\n",floatnum);  // format specifier for float %f;
	printf("%c\n",letter);    // format specifier for character %c;
	printf("%lf\n",number);   // format specifier for double %lf;
	printf("%my number is : %d\n",num);  //to combine both text and variable , seprate
	printf(" my number is %d and my letter is %c",num,letter);
	return 0;
}

//