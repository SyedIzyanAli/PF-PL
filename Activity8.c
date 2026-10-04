#include<stdio.h>
int main(){

    float price[5];
    float sum = 0;
    float discount;
    float payable_bill;

    for (int i = 0; i < 5; i++)
    {
         printf("Enter the Price: ");
         scanf("%f",&price[i]);
         sum += price[i];
         
    }
    printf("\nThe total bill is: %.2f",sum);
    
     if (sum>10000)
     {
        discount = sum*0.1;
        payable_bill = sum - discount;
             printf("\nThe Discount Amount is: %.2f",discount);
             printf("\nThe Final Payable Bill is: %.2f",payable_bill);

        
     }
     
    

    return 0;
}