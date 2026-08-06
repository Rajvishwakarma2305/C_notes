/*
# C Language Notes - Operators

## What is an Operator?

An **operator** is a symbol that tells the compiler to perform a specific operation on one or more operands (variables or values).

Example:
```c
int a = 10, b = 5;
int sum = a + b;   // + is an operator
```

---

# Types of Operators in C

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment and Decrement Operators
6. Bitwise Operators
7. Conditional (Ternary) Operator
8. Special Operators

---

# 1. Arithmetic Operators

Used to perform mathematical calculations.

| Operator | Meaning | Example |
|----------|---------|---------|
| + | Addition | a + b |
| - | Subtraction | a - b |
| * | Multiplication | a * b |
| / | Division | a / b |
| % | Modulus (Remainder) | a % b |

### Example

```c
#include <stdio.h>

int main() {
    int a = 20, b = 6;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
```

Output

```
Addition = 26
Subtraction = 14
Multiplication = 120
Division = 3
Remainder = 2
```

---

# Integer Division

When both numbers are integers, C returns only the integer part.

Example:

```c
printf("%d", 10 / 3);
```

Output

```
3
```

---

# Floating Point Division

If at least one value is float, the answer will contain decimals.

```c
printf("%.2f", 10.0 / 3);
```

Output

```
3.33
```

---

# Modulus Operator (%)

Returns the remainder after division.

Example

```c
17 % 5
```

Output

```
2
```

---

# 2. Relational Operators

Used to compare two values.

| Operator | Meaning |
|----------|---------|
| == | Equal to |
| != | Not Equal to |
| > | Greater than |
| < | Less than |
| >= | Greater than or Equal to |
| <= | Less than or Equal to |

Example

```c
#include <stdio.h>

int main() {

    int a = 10, b = 20;

    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a > b);
    printf("%d\n", a < b);

    return 0;
}
```

Output

```
0
1
0
1
```

**Note:**
- 1 = True
- 0 = False

---

# 3. Logical Operators

Used to combine conditions.

| Operator | Meaning |
|----------|---------|
| && | Logical AND |
| \|\| | Logical OR |
| ! | Logical NOT |

Example

```c
#include <stdio.h>

int main() {

    int age = 20;

    printf("%d\n", age >= 18 && age <= 60);
    printf("%d\n", age < 18 || age > 60);
    printf("%d\n", !(age >= 18));

    return 0;
}
```

---

# Truth Table

## AND (&&)

| A | B | Result |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

## OR (||)

| A | B | Result |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

## NOT (!)

| A | Result |
|---|--------|
| 0 | 1 |
| 1 | 0 |

---

# 4. Assignment Operators

Used to assign values.

| Operator | Meaning |
|----------|---------|
| = | Assign |
| += | Add and Assign |
| -= | Subtract and Assign |
| *= | Multiply and Assign |
| /= | Divide and Assign |
| %= | Modulus and Assign |

Example

```c
int a = 10;

a += 5;   // a = 15
a -= 3;   // a = 12
a *= 2;   // a = 24
a /= 4;   // a = 6
a %= 4;   // a = 2
```

---

# 5. Increment and Decrement Operators

## Increment (++)

Increases value by 1.

```c
int a = 5;
a++;
```

Output

```
6
```

---

## Decrement (--)

Decreases value by 1.

```c
int a = 5;
a--;
```

Output

```
4
```

---

## Pre-Increment

```c
int a = 5;

printf("%d", ++a);
```

Output

```
6
```

Value is increased first.

---

## Post-Increment

```c
int a = 5;

printf("%d", a++);
printf("%d", a);
```

Output

```
5
6
```

Value is printed first, then increased.

---

# 6. Bitwise Operators

Works on binary numbers.

| Operator | Meaning |
|----------|---------|
| & | Bitwise AND |
| \| | Bitwise OR |
| ^ | XOR |
| ~ | NOT |
| << | Left Shift |
| >> | Right Shift |

Example

```c
int a = 5;
int b = 3;

printf("%d", a & b);
```

---

# 7. Conditional (Ternary) Operator

Syntax

```c
condition ? expression1 : expression2;
```

Example

```c
#include <stdio.h>

int main() {

    int age = 18;

    (age >= 18) ? printf("Eligible") : printf("Not Eligible");

    return 0;
}
```

---

# 8. Special Operators

## sizeof Operator

Returns memory occupied by a data type or variable.

Example

```c
printf("%zu", sizeof(int));
```

---

## Comma Operator

```c
int a = (5, 10, 15);
```

Final value of `a` is **15**.

---

## Address Operator (&)

Returns the memory address of a variable.

```c
int a = 10;

printf("%p", &a);
```

---

# Operator Precedence (High to Low)

| Precedence | Operators |
|------------|-----------|
| Highest    | (), ++, --|
|            | *, /, %   |
|            | +, -      |
|            | <, <=, >, >= |
|            | ==, !=    |
|            | &&        |
|            | \|\|      |
| Lowest     | =         |

Use **parentheses ()** whenever you are unsure about precedence.

---

# Important Points

- `%` works only with integers.
- Integer division removes the decimal part.
- `==` checks equality.
- `=` assigns a value.
- `&&` requires all conditions to be true.
- `||` requires at least one condition to be true.
- `!` reverses True and False.
- `++` increases by 1.
- `--` decreases by 1.
- `sizeof()` returns the size in bytes.
- Use parentheses to improve readability.

---

# Interview Questions

### Q1. Difference between = and == ?

- `=` → Assignment operator.
- `==` → Comparison operator.

---

### Q2. Difference between i++ and ++i ?

- `i++` → Use first, then increment.
- `++i` → Increment first, then use.

---

### Q3. Can modulus (%) be used with float?

No. `%` works only with integer data types.

---

### Q4. Which operator is used to get the memory address of a variable?

`&` (Address Operator)

---

# Summary

- Arithmetic → + - * / %
- Relational → == != > < >= <=
- Logical → && || !
- Assignment → = += -= *= /= %=
- Increment/Decrement → ++ --
- Bitwise → & | ^ ~ << >>
- Conditional → ? :
- Special → sizeof, &, comma
*/