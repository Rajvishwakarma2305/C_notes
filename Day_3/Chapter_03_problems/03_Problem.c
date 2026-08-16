/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
             Income            Slab Tax
              2.5 – 5.0L          5%
              5.0L - 10.0L        20%
              Above 10.0L         30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main(){
    float income;
    printf("Enter your income in lakhs :");
    scanf("%f",&income);

    if (income > 2.5 && income <= 5.0)
    {
        printf("Your income slab is 5%%");
    }
    else if (income > 5.0 && income <= 10.0 )
    {
        printf("Your income slab is 20%%");
    }
    else if (income > 10.0)
    {
        printf("Your income slab is 30%%");
    }
    else
    {
        printf("Enter a valid number");
    }
    return 0;
}