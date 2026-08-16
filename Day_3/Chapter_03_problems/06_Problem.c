/*
Write a program to find greatest of four numbers entered by the user
*/

#include <stdio.h>

int main(){
    float num1,num2,num3,num4,max;
    printf("Enter four numbers :");
    scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
    max = num1;
    if (num2>max)
    {
        max = num2;
    }
    if (num3>max)
    {
        max = num3;
    }
    if (num4>max)
    {
        max = num4;
    }
    printf("The greatest number is %f",max);
    
    return 0;
}