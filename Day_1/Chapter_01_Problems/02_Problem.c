/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/

#include <stdio.h>

int main()
{
    int r = 10;
    int h = 34;
    printf("The area of the circle with radius %d is %f\n", r, 3.14 * r * r);
    printf("The volume of the cylinder with radius %d and height %d is %f", r, h, 3.14 * r * r * h);
    return 0;
}
/*
=========================================
Program: Area of Circle & Volume of Cylinder
Language: C
=========================================

Concepts Used:
1. #include <stdio.h>
   - Includes the Standard Input Output library.
   - Allows us to use printf() and scanf().

2. int main()
   - The main() function is the starting point of every C program.
   - Execution begins from here.

3. Variable Declaration
   int r = 10;
   int h = 34;

   - r stores the radius of the circle/cylinder.
   - h stores the height of the cylinder.
   - Both are integer variables.

4. Area of Circle Formula
   Area = π × r × r

   In this program:
   π = 3.14
   Formula used:
   3.14 * r * r

5. Volume of Cylinder Formula
   Volume = π × r × r × h

   In this program:
   3.14 * r * r * h

6. printf()
   Used to display output on the screen.

   Format Specifiers:
   %d → Integer
   %f → Floating-point (decimal) number

7. return 0;
   - Indicates that the program executed successfully.
   - Ends the main() function.

-----------------------------------------
Output:

The area of the circle with radius 10 is 314.000000
The volume of the cylinder with radius 10 and height 34 is 10676.000000

-----------------------------------------
Note:
Since 3.14 is a decimal number, the calculations are done as floating-point values,
so %f is used to print the results.

=========================================
*/