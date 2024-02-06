// (6) Find the Character Is Vowel or Not.

#include<stdio.h>
int main()
{
		printf("\xb2\xb2\xb2\xb2\xb2 : Find the Character Is Vowel or Not :  \xb2\xb2\xb2\xb2\xb2 \n\n\n ");
	char ch;
	
	printf("Enter the character :-");
	scanf("%c",&ch);
	
	 switch(ch)
     {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("it is voval");
		  break;
		default :printf("it is a consonant");
		  break;
	 }
    
    
    return 0;
}
