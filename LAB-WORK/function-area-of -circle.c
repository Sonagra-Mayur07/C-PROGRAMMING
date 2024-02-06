// Find area of rectangle and circle using function

#include<stdio.h>

void Area();

int main()
{
   Area();
    return 0;
}

void Area()
{
    int radius;
    
    printf("Enter the Radius: ");
    scanf("%d", &radius);
    
    float area = 3.14 * radius * radius;
    printf("Area of circle: %.2f\n", area);
}

