// (9)C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

int main() {
    char ch;


    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n"); 
    }

    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    }

    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}

































//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char ch;
//
//    printf("Enter a character: ");
//    scanf("%c", &ch);
//
//    // Check if the entered character is a digit
//    if (isdigit(ch)) {
//        printf("%c is a digit.\n", ch);
//    } else {
//        printf("%c is character.\n", ch);
//    }
//
//    return 0;
//}

