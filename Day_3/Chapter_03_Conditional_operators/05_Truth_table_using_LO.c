#include <stdio.h>

int main(){
    int a = 0, b = 0;
    int c = 0, d = 1;
    int e = 1, f = 0;
    int g = 1, h = 1;

    printf("Truth table of AND when a = 0 and b = 0 : %d\n",a&&b);
    printf("Truth table of OR when a = 0 and b = 0 : %d\n",a||b);

    printf("================================================================================\n");

    printf("Truth table of AND when a = 0 and b = 1 : %d\n",c&&d);
    printf("Truth table of OR when a = 0 and b = 1 : %d\n",c||d);

    printf("================================================================================\n");

    printf("Truth table of AND when a = 1 and b = 0 : %d\n",e&&f);
    printf("Truth table of OR when a = 1 and b = 0 : %d\n",e||f);

    printf("================================================================================\n");

    printf("Truth table of AND when a = 1 and b = 1 : %d\n",g||h);
    printf("Truth table of OR when a = 1 and b = 1 : %d\n",g||h);

    return 0;
} 
