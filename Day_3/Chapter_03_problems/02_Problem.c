/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int phy, chem, math, avg;
    printf("Enter Physics marks :");
    scanf("%d", &phy);
    printf("Enter Chemistry marks :");
    scanf("%d", &chem);
    printf("Enter Maths marks :");
    scanf("%d", &math);
    if (phy > 33)
    {
        printf("\nYou are Passed in Physics");
    }
    else
    {
        printf("\nYou are Failed in Physics");
    }

    if (chem > 33)
    {
        printf("\nYou are Passed in Chemistry");
    }
    else 
    {
        printf("\nYou are Failed in Chemistry");
    }

    if (math > 33)
    {
        printf("\nYou are Passed in Maths");
    }
    else 
    {
        printf("\nYou are Failed in Maths");
    }
    
    avg = (phy + chem + math) / 3;
    printf("\nThe average of the marks are %d", avg);
    if (avg < 40)
    {
        printf("\nYou are fail 🤣");
    }
    else
    {
        printf("\nYou are passed 😭");
    }
    return 0;
}