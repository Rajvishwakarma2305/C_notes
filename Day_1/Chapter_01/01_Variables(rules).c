/*=====================================================
          RULES FOR NAMING VARIABLES IN C
=======================================================

1. The first character must be a letter or an underscore (_).

✔ Correct:
int age;
int student1;
int _count;

❌ Incorrect:
int 1age;      // Starts with a number
int 2marks;    // Starts with a number

-------------------------------------------------------

2. Variable names cannot contain spaces or commas.

✔ Correct:
int totalMarks;
int total_marks;

❌ Incorrect:
int total marks;   // Space is not allowed
int age, years;    // Comma cannot be part of one variable name
                   // (Comma is only used to declare multiple variables.)

Example:
int age, marks;    // ✔ Correct (Two different variables)

-------------------------------------------------------

3. Only the underscore (_) is allowed as a special character.

✔ Correct:
int student_name;
int total_marks;
int _counter;

❌ Incorrect:
int student-name;  // '-' not allowed
int total@marks;   // '@' not allowed
int price#1;       // '#' not allowed
int amount$;       // '$' not allowed

-------------------------------------------------------

4. Variable names are case-sensitive.

This means uppercase and lowercase letters are treated as different variables.

Example:

int age = 18;
int Age = 25;

Here,
age and Age are two different variables.

Similarly,

int marks;
int Marks;

These are also different variables.

-------------------------------------------------------

5. Variable names cannot be C keywords.

Keywords have special meanings in C and cannot be used as variable names.

Examples of keywords:
int
float
char
if
else
while
return

❌ Incorrect:
int int;
float while;

✔ Correct:
int marks;
float salary;

-------------------------------------------------------

6. Use meaningful variable names.

Good variable names make your program easier to understand.

✔ Good:
int age;
float salary;
char grade;
int totalMarks;

❌ Bad:
int a;
float x;
char c;

-------------------------------------------------------

Quick Revision

✔ Starts with a letter or '_'
✔ Can contain letters, numbers, and '_'
✔ No spaces
✔ No special symbols except '_'
✔ Cannot start with a number
✔ Cannot use keywords
✔ Case-sensitive (age ≠ Age)
✔ Use meaningful names

=====================================================*/