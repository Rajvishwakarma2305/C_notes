/*
# Type Casting in C

## What is Type Casting?

**Type Casting** is the process of **manually converting one data type into another**.

The programmer tells the compiler which data type to convert.

### Syntax

```c
(data_type) expression;
```

Example:

```c
(float) a
(int) b
```

---

# Why do we use Type Casting?

We use type casting when we want the result in a different data type.

For example, if we want decimal values instead of integer values.

---

# Example 1

```c
#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    float result = (float)a / b;

    printf("%.2f", result);

    return 0;
}
```

### Output

```
2.50
```

### Explanation

Without type casting:

```c
5 / 2 = 2
```

Both numbers are integers, so C performs **integer division**.

With type casting:

```c
(float)5 / 2
```

becomes

```c
5.0 / 2 = 2.5
```

---

# Example 2

```c
int a = 10;
float b = (float)a;
```

Stored value:

```
10.0
```

---

# Example 3

```c
float marks = 89.75;

int total = (int)marks;
```

Output

```
89
```

### Explanation

The decimal part is removed.

```
89.75
   ↓
89
```

---

# Example 4

```c
char ch = 'A';

int value = (int)ch;
```

Output

```
65
```

Because the ASCII value of `A` is **65**.

---

# Without Type Casting

```c
int a = 5;
int b = 2;

float c = a / b;
```

Calculation:

```
5 / 2 = 2
```

Stored value:

```
2.0
```

---

# With Type Casting

```c
float c = (float)a / b;
```

Calculation:

```
5.0 / 2 = 2.5
```

Stored value:

```
2.5
```

---

# Type Conversion vs Type Casting

| Type Conversion | Type Casting |
|-----------------|-------------|
| Automatic | Manual |
| Done by the compiler | Done by the programmer |
| No special syntax | Uses `(data_type)` |
| Example: `float a = 8;` | Example: `(float)a` |

---

# Important Points

- Type casting is **manual conversion**.
- Syntax:

```c
(data_type) value
```

- It is commonly used to:
  - Get accurate division results.
  - Convert one data type into another.
  - Avoid unwanted integer division.

---

# Memory Trick

```
Type Conversion
Compiler decides.
(Automatic)

↓

Type Casting
Programmer decides.
(Manual)
```

---

# Summary

- **Type Conversion** = Automatic conversion by the compiler.
- **Type Casting** = Manual conversion by the programmer.
- Syntax:

```c
(data_type) expression;
```

Examples:

```c
(float)a
(int)b
(char)x
```

Type casting gives you control over how values are converted.
*/