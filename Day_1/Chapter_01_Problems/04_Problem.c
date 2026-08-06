/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>

int main()
{
    float p, n, r, a;
    printf("Enter Principal amount :");
    scanf("%f", &p);
    printf("Enter Rate of interest :");
    scanf("%f", &r);
    printf("Enter number of year :");
    scanf("%f", &n);
    a = (p * r * n) / 100;
    printf("The Simple interest is : %f", a);
    return 0;
}