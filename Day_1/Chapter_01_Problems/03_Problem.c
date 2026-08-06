/*
 Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include <stdio.h>

int main(){
    float c;
    float f; 
    printf("Enter Celsius :");
    scanf("%f",&c);
    f = (c*1.8)+32;
    printf("The converted value of celcius to fahrenheit is : %f",f);
    return 0;
}