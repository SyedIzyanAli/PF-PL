#include<stdio.h>
int main(){

float price = 0;
int permission = 0;
float total = 0;
float discounted_bill;
float discount = 0;
while(true)
{
    printf("Enter the Price of Item: ");
    scanf("%f",&price);
    total += price;

    printf("Wnat to order Another Item: (1--Yes, 0--No): " );
    scanf("%d",&permission);
    if(permission==0){
       break;
    
    }
}

printf("\nThe Total Bill is: %.2f",total);

if (total>5000)
{
    discount = total*0.05;
    discounted_bill = total-discount;
    printf("\nThe Dicount Amount is: %.2f",discount);
    printf("\nThe Final Payable Bill is: %.2f",discounted_bill);

}

    return 0;
}