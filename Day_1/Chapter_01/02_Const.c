/*=====================================================
                    CONSTANTS IN C
=======================================================

📌 What is a Constant?

A constant is a value that cannot be changed during
the execution of a program.

In simple words:
Once a constant is assigned a value, its value remains
the same throughout the program.

-------------------------------------------------------

📌 What is a Variable?

A variable is a named memory location whose value can
be changed during program execution.

-------------------------------------------------------

Difference Between Variable and Constant

Variable:
✔ Value can be changed.

Example:
int age = 18;
age = 20;      // ✔ Allowed

-------------------------------------------------------

Constant:
✔ Value cannot be changed.

Example:
const int age = 18;
age = 20;      // ❌ Error

-------------------------------------------------------

Syntax

const data_type variable_name = value;

Example:

const int MAX = 100;
const float PI = 3.14159;
const char GRADE = 'A';

-------------------------------------------------------

Examples

Example 1:

const int DAYS = 7;

printf("%d", DAYS);

Output:
7

-------------------------------------------------------

Example 2:

const float PI = 3.14;

float area = PI * 5 * 5;

printf("%.2f", area);

Output:
78.50

-------------------------------------------------------

Example 3:

const char GRADE = 'A';

printf("%c", GRADE);

Output:
A

-------------------------------------------------------

Why Use Constants?

✔ Prevents accidental changes.
✔ Makes the program easier to understand.
✔ Improves code readability.
✔ Used for fixed values like:
   - PI (3.14)
   - Number of days in a week (7)
   - Maximum marks (100)

-------------------------------------------------------

Quick Revision

Constant:
✔ Value cannot be changed.
✔ Declared using the 'const' keyword.

Variable:
✔ Value can be changed.

Example:

int age = 18;           // Variable
const float PI = 3.14;  // Constant

=====================================================*/