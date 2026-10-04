#include<stdio.h>
int main(){

float marks[5];
float sumofmarks = 0;
int noofstudents = 0;
int value_of_i;
float greatest;
float lowest;
for (int i = 0; i < 5; i++)
{
    ++noofstudents;
    printf("\nEnter The Marks: ");
    scanf("%f",&marks[i]);
    sumofmarks += marks[i];    
}
printf("\nThe Total Marks are: %.2f",sumofmarks);
float average = sumofmarks/noofstudents;

printf("\nThe Averge Marks Are: %.2f",average);

for (int i = 0; i < 5; i++)
    {
     for (int j = 0; j < 5; j++)
     {
        if(marks[i]<marks[j]) 
        
        {
            break;
        }
        value_of_i = j;
       
     }
     if (value_of_i==4)
     {
                greatest = marks[i];

        break;
     } 
    }
   printf("\nGreatest: %.2f",greatest);

   for (int i = 0; i < 5; i++)
    {
     for (int j = 0; j < 5; j++)
     {
        if(marks[i]>marks[j]) 
        
        {
            break;
        }
        value_of_i = j;
       
     }
     if (value_of_i==4)
     {
                lowest = marks[i];

        break;

     } 
    }
   printf("\nLowest: %.2f",lowest);

    return 0;
}