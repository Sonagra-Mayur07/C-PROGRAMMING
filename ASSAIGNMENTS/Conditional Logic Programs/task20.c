//30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-


#include <stdio.h>

int main() {
  
    const float surcharge_rate = 0.18;
    const float minimum_bill = 256.0;

   
    float billAmount, totalBill;


    printf("Enter the bill amount: ");
    scanf("%f", &billAmount);

    if (billAmount <= minimum_bill) {
        totalBill = minimum_bill;
    } else {
        totalBill = billAmount + (billAmount * surcharge_rate);
    }

 
    printf("Total bill amount: Rs. %.2f\n", totalBill);

    return 0;
}


