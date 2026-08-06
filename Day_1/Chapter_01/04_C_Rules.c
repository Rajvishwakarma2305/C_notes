/*=====================================================
           BASIC STRUCTURE OF A C PROGRAM
=======================================================

📌 What is the Structure of a C Program?

Every C program follows a basic structure.
The program starts executing from the main() function.

-------------------------------------------------------
Basic Structure
-------------------------------------------------------

#include <stdio.h>      // Header File

int main()              // Main Function
{
    // Statements

    return 0;           // Ends the program

}

-------------------------------------------------------
Explanation
-------------------------------------------------------

1. Header File

#include <stdio.h>

- stdio.h stands for Standard Input Output.
- It provides functions like:
    printf()  -> Display output
    scanf()   -> Take input

-------------------------------------------------------

2. main() Function

int main()
{
    ...
}

- Every C program must have a main() function.
- Program execution always starts from here.
- Without main(), the program cannot run.

-------------------------------------------------------

3. Statements

Statements are the instructions written inside
the main() function.

Example:

printf("Hello World!");

Every statement must end with a semicolon (;).

-------------------------------------------------------

4. return 0;

return 0;

- Indicates that the program has ended successfully.
- It is usually the last statement in the main() function.

-------------------------------------------------------
Example Program
-------------------------------------------------------

#include <stdio.h>

int main()
{
    printf("Welcome to C Programming!");

    return 0;
}

Output:
Welcome to C Programming!

-------------------------------------------------------
Rules of a C Program
-------------------------------------------------------

1. Every program starts execution from main().

Example:

int main()
{
    printf("Hello");
    return 0;
}

-------------------------------------------------------

2. Every statement must end with a semicolon (;).

✔ Correct:

int a = 10;
printf("%d", a);

❌ Incorrect:

int a = 10
printf("%d", a)

-------------------------------------------------------

3. C is Case-Sensitive.

This means uppercase and lowercase letters are
treated differently.

Example:

int age = 18;

printf("%d", age);   // ✔ Correct

printf("%d", Age);   // ❌ Error (Age and age are different)

Similarly,

main()  ≠  Main()
printf  ≠  Printf()

-------------------------------------------------------

4. Statements execute in the order they are written.

Example:

#include <stdio.h>

int main()
{
    printf("First\n");
    printf("Second\n");
    printf("Third\n");

    return 0;
}

Output:
First
Second
Third

The compiler executes the statements one after another,
from top to bottom.

-------------------------------------------------------
Flow of a C Program
-------------------------------------------------------

Start
   ↓
Header File
   ↓
main() Function
   ↓
Statements Execute
   ↓
return 0;
   ↓
End

-------------------------------------------------------
Quick Revision
-------------------------------------------------------

✔ Every C program starts with main().
✔ Statements are written inside main().
✔ Every statement ends with ';'
✔ C is case-sensitive.
✔ Statements execute from top to bottom.
✔ return 0; ends the program successfully.

=====================================================*/

/*
+----------------------+
|  Header Files        |
+----------------------+
           |
           v
+----------------------+
|   main() Function    |
+----------------------+
           |
           v
+----------------------+
|     Statements       |
+----------------------+
           |
           v
+----------------------+
|      return 0;       |
+----------------------+
*/