/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>

int main(){
    char ch;

    // User se ek character input le rahe hain
    printf("Enter a character :");
    scanf("%c",&ch);

    // ASCII value check kar rahe hain
    // 97 se 122 ke beech ki values lowercase letters (a-z) ki hoti hain
    if(ch >= 97 && ch <= 122)
    {
        // Agar character a-z ke beech hai, toh lowercase hai
        printf("The entered character is in lower case");
    }
    else
    {
        // Agar character a-z ke beech nahi hai, toh lowercase nahi hai
        printf("The entered character is not in lowercase");
    }

    // Program ko successfully end karne ke liye
    return 0;
}