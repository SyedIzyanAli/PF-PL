#include<stdio.h>
int main(){

float households[5];
float total_units = 0;
int value_of_i = 0;
float greatest = 0;
float lowest = 0;
float bill = 0;

for (int i = 0; i < 5; i++)
{
    printf("\nEnter Units: ");
    scanf("%f",&households[i]);
    total_units += households[i];

}
printf("\nTotal Units: %f",total_units);

for (int i = 0; i < 5; i++)
    {
     for (int j = 0; j < 5; j++)
     {
        if(households[i]<households[j]) 
        
        {
            break;
        }
        value_of_i = j;
       
     }
     if (value_of_i==4)
     {
                greatest = households[i];

        break;
     } 
    }
   printf("\nGreatest: %.2f",greatest);

   for (int i = 0; i < 5; i++)
    {
     for (int j = 0; j < 5; j++)
     {
        if(households[i]>households[j]) 
        
        {
            break;
        }
        value_of_i = j;
       
     }
     if (value_of_i==4)
     {
                lowest = households[i];

        break;

     } 
    }
   printf("\nLowest: %.2f",lowest);

   // bill calculation Using Loops
   for (int i = 0; i < 5 ; i++)
   {
    bill = (households[i])*10;
    if (households[i]>500)
    {
        bill += bill*0.05;
    }
    printf("\nThe Total Units for Household %d: %.2f",i+1,households[i]);
    printf("\nThe Bill For Houshold %d is %.2f",i+1,bill);
   }
   


    return 0;
}