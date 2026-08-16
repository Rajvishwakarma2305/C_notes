/*
Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user
*/

#include <stdio.h>

int main(){
    int num;

    // User se year input le rahe hain
    printf("Enter the year :");
    scanf("%d",&num);

    // Check kar rahe hain ki year leap year hai ya nahi
    // Year 4 se divisible ho aur 100 se divisible na ho
    // OR year 400 se divisible ho
    if ((num%4==0 && num%100!=0) || num%400==0)
    {
        // Agar condition true hai, toh leap year hai
        printf("The entered year is a leap year");
    }
    else
    {
        // Agar condition false hai, toh leap year nahi hai
        printf("The entered year is not a leap year");
    }

    // Program successfully end karne ke liye
    return 0;
}