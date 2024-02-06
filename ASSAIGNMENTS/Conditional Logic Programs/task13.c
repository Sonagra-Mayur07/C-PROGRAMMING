//(13)WAP to find minimum number among 3 numbers using ternary operator.


int main() {
    int num1, num2, num3;


    printf("Enter First numbers: ");
    scanf("%d", &num1);
    
    printf("Enter Second numbers: ");
     scanf("%d",&num2);
    
    printf("Enter therd numbers: ");
     scanf("%d", &num3);

     (num1 < num2) ? ((num1 < num3) ? printf(" minimum number is : %d",num1) : printf(" minimum number is : %d",num3)) : ((num2 < num3) ? printf(" minimum number is : %d",num2) : printf(" minimum number is : %d",num3));


    return 0;
}
