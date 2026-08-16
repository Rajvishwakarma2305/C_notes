#include <stdio.h>

int main(){
    float a;
    float b;
    int choice;
    printf("===================Calculator===================\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for substraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Enter your operation number :\n");
    scanf("%d",&choice);
    if (choice >= 1 || choice <= 5) {
        printf("%n",&choice);
    }
    else {
        printf("Enter a valid number");
    }
    printf("Enter first number :");
    scanf("%f",&a);    
    printf("Enter second number :");
    scanf("%f",&b);
    
    

    switch(choice){
        case 1:
            printf("The sum is :%f\n", a+b);
            break;
        case 2:
            printf("The diff is :%f\n", a-b);
            break;
        case 3:
            printf("The product is :%f\n", a*b);
            break;
        case 4:
            printf("The division is :%f\n", a/b);
            break;
        case 5:
            printf("Exit");
            break;
        default:
            printf("Enter a valid number");
            break;
        
    }    
    return 0;
}