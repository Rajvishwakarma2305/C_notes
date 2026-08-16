#include <stdio.h>

int main()
{
    // In C, any non-zero value is considered TRUE.
    // Since 12 is non-zero, this condition becomes TRUE.
    if (12)
    {
        // This statement will be executed.
        printf("This is non-zero hence it will be printed");
    }

    // In C, 0 is considered FALSE.
    // Therefore, this condition becomes FALSE.
    if (0)
    {
        // This statement will NOT be executed.
        printf("This is zero hence it will not be printed");
    }

    // End of the program.
    return 0; //this line tells that the program executed successfully
}