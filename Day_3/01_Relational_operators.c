/*
# RELATIONAL OPERATORS IN C

## What are Relational Operators?

Relational operators are used to compare two values or expressions.

They evaluate a condition and return either:

- **1 (True)** → Condition is satisfied.
- **0 (False)** → Condition is not satisfied.

These operators are commonly used in:

- `if` statements
- `if-else` statements
- `while` loops
- `for` loops

---

# Relational Operators

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `==` | Equal to | `a == b` | True if both values are equal |
| `!=` | Not equal to | `a != b` | True if values are different |
| `>` | Greater than | `a > b` | True if left value is greater |
| `<` | Less than | `a < b` | True if left value is smaller |
| `>=` | Greater than or equal to | `a >= b` | True if left value is greater or equal |
| `<=` | Less than or equal to | `a <= b` | True if left value is smaller or equal |

---

# Important Note

Do **NOT** confuse these two operators:

### Assignment Operator (`=`)

Used to assign a value.

```c
a = 10;
```

This stores **10** in variable `a`.

### Equality Operator (`==`)

Used to compare two values.

```c
if(a == 10)
```

This checks whether `a` is equal to **10**.

---

# Example Program

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);

    return 0;
}
```

### Output

```
0
1
0
1
0
1
```

---

# Using Relational Operators in if Statement

```c
#include <stdio.h>

int main()
{
    int age = 20;

    if(age >= 18)
    {
        printf("You are eligible to vote.");
    }

    return 0;
}
```

### Output

```
You are eligible to vote.
```

---

# Multiple Examples

### Example 1

```c
int x = 5;
int y = 5;

printf("%d", x == y);
```

Output

```
1
```

---

### Example 2

```c
int x = 7;
int y = 3;

printf("%d", x > y);
```

Output

```
1
```

---

### Example 3

```c
int x = 2;
int y = 8;

printf("%d", x >= y);
```

Output

```
0
```

---

# True and False in C

C does not have a separate Boolean type in basic programs.

Instead:

- **0** → False
- **Any non-zero value** → True

Example:

```c
if(10)
{
    printf("This is True");
}
```

Output

```
This is True
```

Because **10** is a non-zero value.

---

Another example:

```c
if(0)
{
    printf("Hello");
}
```

Output

```
(No output)
```

Because **0** represents **False**.

---

# Condition Can Be Any Valid Expression

Example:

```c
if((5 + 3) > (2 * 3))
{
    printf("Condition is True");
}
```

Output

```
Condition is True
```

---

# Summary

- Relational operators compare two values.
- They return **1 (True)** or **0 (False)**.
- They are mainly used in decision-making statements.
- `=` is used for **assignment**.
- `==` is used for **comparison**.
- In C:
  - **0 = False**
  - **Any non-zero value = True**
*/