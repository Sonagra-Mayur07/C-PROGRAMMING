//(2) take character from user and checl it is vowel or consonant..

#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

     switch(character)
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

