#include<stdio.h>
int main(){

int money = 50000;
int transactions=0;
int amount;

while(1){

printf("Enter the Amount to Withdraw: ");
scanf("%d",&amount);

if((amount==0 || amount<0) || (money==0)){
    printf("The total Money Remaining is: %d",money);
    printf("\nThe Total Number of Transactions is: %d",transactions);

    break;
}
else{
    money -= amount;
    ++transactions;
}
}

    return 0;
}