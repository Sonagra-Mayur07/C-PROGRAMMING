// swap without third variable

#include <stdio.h>

int main() {
    int a,b ;
    
     printf("A:", a);
     scanf("%d",&a);
    
     printf("B:", b);
     scanf("%d",&b);
    

    a = a + b;
    b = a - b;
    a = a - b;

    printf("swapping: A = %d, B = %d", a, b);

    return 0;
}
 
