#include <stdio.h>
int main(){

int attempts = 0;
int correct_PIN = 1234;
int PIN;
bool Status;

for (int i = 0; i < 3; i++)
{
    ++attempts;

printf("\nEnter PIN: ");
scanf("%d",&PIN);
if (PIN==correct_PIN)
{
    printf("\nLogin Successful!");
    Status = 4<5;
    break;

}
else{
    printf("\n%d Attempts Remaining!",(3-attempts));
}

}

if (Status!=1)
{
    printf("\nAccount Locked!");
}



}