/*
Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>

int main()
{
    int a = 97;
    if (a % 4 == 0)
    {
        printf("The number is divisible by 4");
    }
    else
    {
        printf("The number is not divisible by 4");
    }
    return 0;
}