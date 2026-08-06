#include <stdio.h>

int main()
{
    int a = 365, b = 12345789;
    a > b ? printf("a is greater than b") : printf("b is greater than a");
    return 0;
}
// the thing happened here is that the value of a is greater than b
// so the output is a is greater than b
// using Ternary operator in C