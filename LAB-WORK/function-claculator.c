#include<stdio.h>

void add();
void sub();
void mul();
void divide();
void modulo();
    
int main()
{
	
    
    int num1, num2,result;


    printf("Enter the value 1:-");
    scanf("%d",& num1);
 	printf("Enter the value 2:-");
    scanf("%d",& num2);
    
    printf("The number of operator:- ");
    scanf("%d",&result);
    
    switch(result)
   {
   	case 1: add(num1,num2);
    break;
            
            case 2: sub(num1,num2);
            break;
            
            case 3: mul(num1,num2);
            break;
            
            case 4 : divide(num1,num2);
            break;
            
            case 5 : modulo(num1,num2);
            break;
           
           default : printf("Error: Invalid operator\n");
            
            return 0; 
   }
   
}
   
   
   void add(int a,int b)
   {
   	   printf("%d",(a+b));
   }
   void sub(int a,int b)
   {
   	   printf("%d",(a-b));
   }
   void mul(int a,int b)
   {
   	   printf("%d",(a*b));
   }
   void divide(int a,int b)
   {
   	   printf("%d",(a/b));
   }
    void modulo(int a,int b)
   {
   	   printf("%d",(a%b));
   }

