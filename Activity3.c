#include<stdio.h>
int main(){

float amount;
float balance = 0;
float recharge_tracker = 0;
int attempt = 0;
while (true)
{
          ++attempt;

  printf("Enter the Amount to Enter: ");
  scanf("%f",&amount);
 if (amount>0)
 {
  balance += amount;
      recharge_tracker += amount;

  if(recharge_tracker>5000){
    printf("Recharge limit reached!");
    break;
  }
 }
 else{
    break;
 }
}

printf("\nThe total recharge amount is: %.2f",recharge_tracker);
printf("\nThe total current balance is: %.2f",balance);
printf("\nThe total Number of Recharge attempts are: %d",attempt);

    return 0;
}