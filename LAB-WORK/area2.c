//area of cricle pi*r*r //float pi=3.14 //ans=pi*r*r
#include <stdio.h>

int main() {
    
    float pi = 3.14;
    float radius,area;
    
    printf("Enter is radius :");
    scanf("%f",&radius);
    
    area = pi * radius * radius;
    
    printf("The area of cricle : %.2f",area);
   
    return 0;
}

