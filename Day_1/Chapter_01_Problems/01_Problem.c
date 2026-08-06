/*
Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/

#include <stdio.h>

int main()
{
    float lenght;
    float breadth;
    printf("Enter Lenght of rectangle :");
    scanf("%f", &lenght);
    printf("Enter breadth of rectangle :");
    scanf("%f", &breadth);
    printf("Area of Reactangle is :%f", lenght * breadth);

    return 0;
}