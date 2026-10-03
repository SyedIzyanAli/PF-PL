#include<stdio.h>
int main(){

float marks;
float sum = 0;
int noofstudents = 0;

while (true)
{
    printf("\nEnter Marks: ");
    scanf("%f",&marks);
    if (marks==-1)
    {
        break;
    }
    else{
    if (marks>=0)
    {
        sum += marks;
        ++noofstudents;
    }
    else{
        printf("\nEnter Valid Value!");
    }
    }
    
}
if (noofstudents==0)
{
    printf("\nAverage : 0");
    printf("\nThe total Number of Students: %d",noofstudents);
}
else{
float average = sum/noofstudents;

printf("\nThe Average is: %f",average);
printf("\nThe total number of students is: %d",noofstudents);
}    
return 0;
}