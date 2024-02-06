//(15)5.Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.



#include<stdio.h>

void main()
{
	int pay,chem,maths,totle,maths_pay;

	printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ELIGIBILITY FOR ADMISSION : \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("Enter your physics marks   : ");
	scanf("%d",&pay);
	printf("Enter your chemistry marks : ");
	scanf("%d",&chem);
	printf("Enter your maths marks     : ");
	scanf("%d",&maths);

    totle=pay+chem+maths;
    
    maths_pay=maths+pay;
    
    if(maths>=65 && pay>=55 && chem>=50 && totle>=190 && maths_pay>=140 )
    {
    	printf("you are eligible for professional course ");
	}
	else{
			printf("you are not eligible for professional course ");
	}
}

