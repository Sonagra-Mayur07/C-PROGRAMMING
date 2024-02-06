// 32.Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

int main() {
    float basicSalary, hra, da;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    


    if (basicSalary >= 0) {

        if (basicSalary <= 10000)
		 {
            hra = 0.20 * basicSalary;
            da = 0.80 * basicSalary;
        } 
		else if (basicSalary <= 20000) 
		{
            hra = 0.25 * basicSalary;
            da = 0.90 * basicSalary;
        }
		else 
		 {
            hra = 0.30 * basicSalary;
            da = 0.95 * basicSalary;
        }

        printf("Basic Salary: Rs. %.2f\n", basicSalary);
        printf("HRA: Rs. %.2f\n", hra);
        printf("DA: Rs. %.2f\n", da);
    } else {
        printf("Please enter a non-negative value.\n");
    }

    return 0;
}

