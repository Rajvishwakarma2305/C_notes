/*=====================================================
                  KEYWORDS IN C
=======================================================

📌 What are Keywords?

Keywords are reserved words in C that have a predefined
meaning. The compiler already knows what these words
mean, so they cannot be used as variable names,
function names, or any other identifiers.

There are 32 keywords in the original C language.

-------------------------------------------------------
List of C Keywords
-------------------------------------------------------

auto      break      case       char
const     continue   default    do
double    else       enum       extern
float     for        goto       if
int       long       register   return
short     signed     sizeof     static
struct    switch     typedef    union
unsigned  void       volatile   while

-------------------------------------------------------
Rules
-------------------------------------------------------

✔ Keywords have a special meaning.
✔ Their spelling cannot be changed.
✔ They cannot be used as variable names.
✔ They are written in lowercase.

-------------------------------------------------------
Examples
-------------------------------------------------------

✔ Correct:

int age = 18;
float price = 99.99;

-------------------------------------------------------

❌ Incorrect:

int int = 10;      // 'int' is a keyword
float while = 5.5; // 'while' is a keyword
char return = 'A'; // 'return' is a keyword

-------------------------------------------------------
Commonly Used Keywords
-------------------------------------------------------

int       -> Used to declare an integer variable.
float     -> Used to declare a decimal variable.
char      -> Used to declare a character variable.
if        -> Used for decision making.
else      -> Used with if.
for       -> Used to create a for loop.
while     -> Used to create a while loop.
do        -> Used for do-while loop.
return    -> Returns a value from a function.
void      -> Indicates no return value.
break     -> Exits a loop or switch statement.
continue  -> Skips the current iteration of a loop.

-------------------------------------------------------
Example Program
-------------------------------------------------------

#include <stdio.h>

int main()
{
    int age = 18;

    if (age >= 18)
    {
        printf("Eligible to vote");
    }

    return 0;
}

Keywords used in this program:
✔ int
✔ if
✔ return

-------------------------------------------------------
Quick Revision
-------------------------------------------------------

✔ Keywords are reserved words.
✔ They have predefined meanings.
✔ Cannot be used as variable names.
✔ Original C has 32 keywords.
✔ Examples:
   int, float, char, if, else, while, for, return

=====================================================*/