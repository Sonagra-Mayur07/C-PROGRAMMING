//37.WAP to show.

//i. Monday to Sunday using switch case

   #include <stdio.h>

int main() {
    int weekNumber;


    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);


    if (weekNumber >= 1 && weekNumber <= 7) {
  
        switch (weekNumber) {
            case 1:
                printf("Day: Sunday\n");
                break;
            case 2:
                printf("Day: Monday\n");
                break;
            case 3:
                printf("Day: Tuesday\n");
                break;
            case 4:
                printf("Day: Wednesday\n");
                break;
            case 5:
                printf("Day: Thursday\n");
                break;
            case 6:
                printf("Day: Friday\n");
                break;
            case 7:
                printf("Day: Saturday\n");
                break;
        }
    } else {
        printf("Please enter a number between 1 and 7.\n");
    }

    return 0;
}




//ii. Vowel or Consonant using switch case.


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









